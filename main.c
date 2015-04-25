/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbooth <mbooth@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/05 10:34:35 by mbooth            #+#    #+#             */
/*   Updated: 2015/02/13 16:14:06 by mbooth           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf/ft_printf.h"
//#include <locale.h> 

int			main()
{
/*    ft_printf(".%%.%%.%%.%%.%%.%%.%%.%%.");
    ft_putchar('\n');
    printf(".%%.%%.%%.%%.%%.%%.%%.%%.");
    ft_putchar('\n');
    ft_putchar('\n');*/
    ft_printf("{%04.2d}", 0);
    ft_putchar('\n');
    printf("{%04.2d}", 0);
//	printf("HEX test: BIG X - %#10.5X ; small x without hashtag - %10.5x ;\nBIG O - %#10O ; small o wisthout hashtag - %10o\n", i, i, i, i);
	return (0);
}
