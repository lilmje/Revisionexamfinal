/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmendy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/25 01:19:21 by jmendy            #+#    #+#             */
/*   Updated: 2016/07/25 02:31:43 by jmendy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src);

int		main(void)
{
	char *s1 = "test";
	char s2[6];

	printf("chaine de s1 : %s \n chaine de s2 : %s \n", s1, s2);
	printf("chaine de s2 : %s \n ", ft_strcpy(s2, s1));
	return (0);
}
