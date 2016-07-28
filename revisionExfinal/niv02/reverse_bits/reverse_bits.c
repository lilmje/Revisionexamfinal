/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmendy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/27 18:00:28 by jmendy            #+#    #+#             */
/*   Updated: 2016/07/28 16:33:44 by jmendy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned char	reverse_bits(unsigned char octet)
{
	int i = 1;
	int j = 0x80;
	unsigned char change;
	
	change = 0;
	while (i < j)
	{
		if ((octet & i) > 0)
			change += j;
		if ((octet & j) > 0)
			change += i;
		i *= 2;
		j /= 2;
	}
	return (change);
}

int		main(void)
{
	unsigned char octet = 34;
	printf("%d", reverse_bits(70));
}
