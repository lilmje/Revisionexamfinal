/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmendy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/25 19:01:43 by jmendy            #+#    #+#             */
/*   Updated: 2016/07/25 19:48:55 by jmendy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b);

int		main(void)
{
	int a;
	int b;
	int *ptr_a;
	int *ptr_b;

	a = 42;
	b = 8;
	ptr_a = &a;
	ptr_b = &b;
	printf("valeur de  a : %d \n valeur de b: %d \n", a, b);
	ft_swap(ptr_a, ptr_b);
	printf("valeur de  a : %d \n valeur de b: %d \n", a, b);
	return (0);
}
