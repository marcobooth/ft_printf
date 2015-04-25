/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   typestring.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbooth <mbooth@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/11 11:16:00 by mbooth            #+#    #+#             */
/*   Updated: 2015/02/11 11:16:02 by mbooth           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	print_type_string(va_list arguments, t_format *format,
							t_conversion *conversion)
{
	if (conversion->length == L)
	{
		print_wide_string(conversion, va_arg(arguments, wchar_t *), format);
		return ;
	}
	else
		print_normal_string(va_arg(arguments, char *), format, conversion);
}
