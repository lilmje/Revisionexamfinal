/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmendy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/26 20:49:28 by jmendy            #+#    #+#             */
/*   Updated: 2016/07/26 21:26:03 by jmendy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_atoi(const char *str)
{
	int i;
	int neg;
	int res;

	i = 0;
	neg = 1;
	res = i;
	if(str[i] == '-')
		i++;
	while (str[i] == '+')
		i++;
	while (str[i] < '0' && str[i] > '9')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - 48);
		i++;
	}
	if (str[0] == '-')
		res = res * (neg * -1);
	return (res);
}

int		main(void)
{
	char *str = "000000";
	printf("%d", ft_atoi(str));
	return (0);
}
