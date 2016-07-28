/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmendy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/25 20:02:22 by jmendy            #+#    #+#             */
/*   Updated: 2016/07/25 20:37:17 by jmendy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		main(int argc, char **argv)
{
	int i;
	char j;
	int num;


	while (argv[1][i] != '\0')
	{
		if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
			num = argv[1][i] - 'a' + 1;
		if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
			num = argv[1][i] - 'A' + 1;
		j = 0;
		while (j < num)
		{
			write(1, &argv[1][i], 1);
			j++;
		}
		i++;
	}
	return (0);
}
