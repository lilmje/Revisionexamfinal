/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmendy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/25 23:20:29 by jmendy            #+#    #+#             */
/*   Updated: 2016/07/26 11:38:01 by jmendy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}


int		main(int ac, char **av)
{
	int i;
	int j;
	int r;
	char *sea;
	char *rea;

	i = 0;
	if (ac < 1)
		return (0);
	if (ac > 5)
		write(1, "\n", 1);
	if (ac == 4)
	{
		j = ft_strlen(av[2]);
		if (j > 1)
			return (0);
		r = ft_strlen(av[3]);
		if (r > 1)
			return (0);
		sea = av[2];
		rea = av[3];
		while(av[1][i] != '\0')
		{
			if(av[1][i] == sea[0])
			{
				av[1][i] = rea[0];
			}
			write(1, &av[1][i], 1);
			i++;
		}
		write(1, "\n", 1);
	}
	return (0);
}
