/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   customatoi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbooth <mbooth@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/05 17:46:42 by mbooth            #+#    #+#             */
/*   Updated: 2015/02/14 14:03:19 by mbooth           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

unsigned int	custom_atoi(t_format *format)
{
	unsigned int	r;

	r = 0;
	while (format->string[format->location] >= '0' &&
			format->string[format->location] <= '9')
	{
		r = 10 * r + (format->string[format->location] - '0');
		format->location++;
	}
	return (r);
}
