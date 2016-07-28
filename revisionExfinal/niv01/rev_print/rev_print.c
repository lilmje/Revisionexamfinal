/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmendy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/25 21:28:10 by jmendy            #+#    #+#             */
/*   Updated: 2016/07/25 23:17:39 by jmendy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while(str[i] != '\0')
		i++;
	return (i);
}

int		main(int ac, char **av)
{
	int i;
	int j;

	i = 0;
	if (ac < 1)
		return(0);
	if (ac > 1)
	{
		i = ft_strlen(av[1]);
		j = 0;
		while (j < i)
		{
			write(1, &av[1][i - 1], 1);
			i--;
		}
	}
	write(1, "\n", 1);
	return(0);
}
