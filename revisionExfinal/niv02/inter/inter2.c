/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmendy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/27 23:13:01 by jmendy            #+#    #+#             */
/*   Updated: 2016/07/28 00:18:08 by jmendy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>


int		comp2(char *av2, char c, int y)
{
	int i;

	i = 0;
	while(av2[i] != '\0' && av2[i] != c)
		i++;
	if(y == i)
		return (1);
	return (0);
}

int		comp1(char *av1, char c)
{
	int u;

	u = 0;
	while(av1[u] != '\0')
	{
		if(av1[u] == c)
			return (1);
		u++;
	}
	return (0);
}

int		main(int ac, char **av)
{
	int i;

	i = 0;
	if (ac != 3)
		write(1, "\n", 1);
	if(ac == 3)
	{
		while(av[1][i] != '\0')
		{
			if(comp1(av[2], av[1][i]) && comp2(av[1], av[1][i], i))
				write(1, &av[1][i], 1);
			i++;
		}
		write(1, "\n", 1);
	}
	return (0);
}
