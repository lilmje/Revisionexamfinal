/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_last_param.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmendy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/24 21:35:08 by jmendy            #+#    #+#             */
/*   Updated: 2016/07/24 21:50:24 by jmendy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while(str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int		main(int ac, char **av)
{
	int i;
	int p;

	i = ac - 1;
	p = 0;
	if (ac < 0)
		return (0);
	if (ac == 1)
		write(1, "\n", 1);
	if (ac > 1)
	{
		while(av[i] != '\0')
		{
			ft_putstr(av[i]);
			i++;
		}
		write (1, "\n", 1);
	}
	return (0);
}
