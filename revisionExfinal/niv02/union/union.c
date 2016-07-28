/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmendy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/27 20:31:43 by jmendy            #+#    #+#             */
/*   Updated: 2016/07/28 02:01:20 by jmendy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>


int		thirst(char *s3, char c, int i)
{
	int k;

	k = 0;
	while (s3[k] != '\0' && s3[k] != c)
		k++;
	if (k == i)
		return (1);
	return (0);
}

int		second(char *s2, char c)
{
	int j;

	j = 0;
	while (s2[j])
	{
		if(s2[j] == c)
			return(1);
		j++;
	}
	return (0);
}

int		first(char *s1, char c,int i)
{
	int u;

	u = 0;
	while ((s1[u]) && s1[u] != c)
		u++;
	if( i == u)
		return(1);
	return (0);
}


int		main(int ac, char **av)
{
	int i;

	i = 0;
	if (ac < 3)
		write(1, "\n", 1);
	if (ac > 3)
		write(1, "\n", 1);
	if (ac == 3)
	{
		while(av[1][i] != '\0')
		{
			if(first(av[1], av[1][i], i), second(av[2], av[1][i]), thirst(av[2],av[2][i], i))
				write(1, &av[1][i], 1);
			i++;
		}
		i = 0;
		while(av[2][i] != '\0')
		{
			if(thirst(av[2],av[2][i], i), second(av[2],av[1][i]), first(av[1], av[1][i], i))
				write(1, &av[2][i], 1);
			i++;
		}
		write(1, "\n", 1);
	}
	return (0);
}
