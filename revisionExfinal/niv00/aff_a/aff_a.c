/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmendy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/24 19:07:54 by jmendy            #+#    #+#             */
/*   Updated: 2016/07/24 19:44:45 by jmendy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int ac, char **av)
{
	int i;
	int p;

	i = 1;
	p = 0;
	if (ac < 1)
		return(0);
	if (ac == 1)
		write(1, "a\n", 2);
	if (ac >= 2)
	{
		while(av[i][p] != '\0')
		{
			if (av[i][p] == 'a')
			{
				write(1, "a\n", 2);
				return (0);
			}
			p++;
		}
		write(1, "\n", 1);
	}
	return (0);
}