/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dealing_with_width.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbooth <mbooth@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/05 15:52:14 by mbooth            #+#    #+#             */
/*   Updated: 2015/02/14 14:18:45 by mbooth           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void		deal_with_width(t_format *format, t_conversion *conversion)
{
	unsigned int	r;

	r = custom_atoi(format);
	conversion->width = r;
}
