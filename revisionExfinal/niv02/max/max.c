/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmendy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/28 14:43:17 by jmendy            #+#    #+#             */
/*   Updated: 2016/07/28 17:30:16 by jmendy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>


int		max(int *tab, unsigned int len)
{
	int i;
	int num;

	i = 0;
	num = 0;
	if (tab[i] == 0)
		return (0);
	while(i != len)
	{
		if(tab[i] > num)
		{
			num = tab[i];
		}
		i++;
	}
	return(num);
}

int		main(void)
{
	int tab[] = {1,3,1,8,1,9,1};
	unsigned int len = 7;
	printf("%d", max(tab, len));
	return (0);
}
