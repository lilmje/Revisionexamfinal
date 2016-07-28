/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_bits.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmendy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/27 19:15:50 by jmendy            #+#    #+#             */
/*   Updated: 2016/07/28 01:11:58 by jmendy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned char  swap_bits(unsigned char octet)
{
	return((octet + (octet >> 4 << 4)) * 2 * 2 * 2 * 2 + (octet >> 4));
}

int		main(void)
{
	printf("octet %d\n apres swap %d", 72, swap_bits(72));
	return (0);
}
