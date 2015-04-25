/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_octal.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbooth <mbooth@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/09 19:39:42 by mbooth            #+#    #+#             */
/*   Updated: 2015/02/09 19:39:53 by mbooth           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

//OCTAL MISSING, but it is just

static	void	ft_putoctal_justify_right(char *string,
					t_conversion *conversion, char fill, t_format *format)
{
	size_t			length;
	size_t			i;
	int				n;

	n = 0;
	i = 0;
	length = ((unsigned int)ft_strlen(string) < conversion->precision) ?
					conversion->precision : (unsigned int)ft_strlen(string);
	while (i + length < conversion->width)
	{
		ft_putchar(fill);
		i++;
		format->written++;
	}
	i = 0;
	while (string[i] != '\0')
	{
		if (conversion->precision_set && n == 0)
			precision_zeros(conversion, string, format, 0);
		n = 1;
		ft_putchar(string[i]);
		i++;
		format->written++;
	}
}

static void		ft_putoctal_justify_left(char *string,
					t_conversion *conversion, char fill, t_format *format)
{
	size_t			i;
	int				n;

	n = 0;
	i = 0;
	while (string[i] != '\0')
	{
		if (conversion->precision_set && n == 0)
			precision_zeros(conversion, string, format, 0);
		n = 1;
		ft_putchar(string[i]);
		i++;
		format->written++;
	}
	while (i < conversion->width)
	{
		ft_putchar(fill);
		i++;
		format->written++;
	}
}

void	decimal_to_octal(size_t n, t_format *format, t_conversion *conversion)
{
	size_t	i;
	int		rem;
	char	*octal_str;

	if (n == 0)
	{
		if (!conversion->flags.hashtag && conversion->precision_set && conversion->precision == 0)
			return ;
		ft_putchar('0');
		format->written++;
		return ;
	}
	if (conversion->length == H)
		n = n % 65536;
	if (conversion->length == HH)
		n = n % 256;
	if (!conversion->length)
		n = n % 4294967296;
	i = 0;
	if (conversion->flags.hashtag)
		octal_str = ft_memalloc(sizeof(char) * (ft_intpwr(n, 8) + 1 + 1));//add precision/width here or not?
	else
		octal_str = ft_memalloc(sizeof(char) * (ft_intpwr(n, 8) + 1));
	while (n != 0)
	{
		rem = n % 8;
		octal_str[i]= rem + '0';
		++i;
		n /= 8;
	}
	if (conversion->flags.hashtag)
		octal_str[i++] = '0';
	octal_str[i] = '\0';
	ft_strrev(octal_str);
	if (conversion->flags.left_justify)
		ft_putoctal_justify_left(octal_str, conversion, ' ', format);
	else
		ft_putoctal_justify_right(octal_str, conversion, ' ', format);
	//ft_putstr, left or right and after ft_strdel(&hex_str)
}