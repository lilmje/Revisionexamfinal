/**************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmendy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/28 18:50:13 by jmendy            #+#    #+#             */
/*   Updated: 2016/07/28 19:46:33 by jmendy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	print_bits(unsigned char octet)
{
	unsigned char tamp;

	tamp = 0x80;
	while(tamp != 0)
	{
		if ((tamp & octet) > 0)
			write(1, "1", 1);
		else
			write(1, "0", 1);
		tamp >>= 1;
	}
}

int		main(void)
{
	print_bits(2);
	return (0);
}

