/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmendy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/28 00:18:28 by jmendy            #+#    #+#             */
/*   Updated: 2016/07/28 00:30:24 by jmendy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>


int		second(char *av2, char c, int i)
{
	int u;

	u = 0;
	while(av2[u] && av2[u] != c)
		u++;
	if(i == u)
		return (1);
	return (0);
}



int		first(char *av1, char c)
{
	int j;

	j = 0;
	while(av1[j] != '\0')
	{
		if(av1[j] == c)
			return(1);
		j++;
	}
	return (0);
}





int		main(int ac, char **av)
{
	int i;

	i = 0;
	if (ac != 3)
		write(1, "\n", 1);
	if (ac == 3)
	{
		while(av[1][i] != '\0')
		{
			if(first(av[2], av[1][i]) && second(av[1], av[1][i], i))
				write(1, &av[1][i], 1);
			i++;
		}
	}
	return (0);
}
