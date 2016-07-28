/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmendy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/28 17:31:06 by jmendy            #+#    #+#             */
/*   Updated: 2016/07/28 18:49:20 by jmendy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>


int		ft_first(char *s1, char *s2, int i)
{
	int r;

	r = 0;
	while(s2[r] != '\0' && s2[r] == s1[i])
	{
		return (1);
		r++;
	}
	return(0);
}


int		main(int ac, char **av)
{
	int i;
	int r;

	i = 0;
	r = 0;
	if(ac != 3)
		write(1, "\n", 1);
	if(ac == 3)
	{
		while(av[1][i] != '\0')
		{
			while(av[2][r] != av[1][i])
				r++;
			if(av[1][i] == av[2][r])
				write(1, &av[1][i], 1);
			i++;
		}
	}
		return(0);
}
