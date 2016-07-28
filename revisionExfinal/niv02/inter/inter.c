/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmendy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/27 12:59:28 by jmendy            #+#    #+#             */
/*   Updated: 2016/07/27 23:10:39 by jmendy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int		test2(char *av2, char c)
{
	int i;

	i = 0;
	while(av2[i] != '\0')
	{
		if(av2[i] == c)
			return(1);
		i++;
	}
	return (0);
}

int		test(char *av1, char c, int i)
{
	int j;

	j = 0;
	while(av1[j] != '\0' && av1[j] != c)
		j++;
	if (j == i)
		return(1);
	return (0);
}

int		main(int ac, char **av)
{
	int i;

	i = 0;
	if (ac < 2)
		write(1, "\n", 1);
	if (ac > 3)
		write(1, "\n", 1);
	if (ac == 3)
	{
		while(av[1][i] != '\0')
		{
			if (test2(av[2], av[1][i])  && test(av[1], av[1][i], i))
				write(1, &av[1][i], 1);
			i++;
		}
		write(1, "\n", 1);
	}
	return (0);
}
