/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmendy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/26 21:41:49 by jmendy            #+#    #+#             */
/*   Updated: 2016/07/26 23:54:05 by jmendy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char *ft_strdup(char *src)
{
	char *copie;
	int  i;

	i = 0;
	while (src[i] != '\0')
		i++;
	i++;
	copie	=(char *)malloc(i * sizeof(char));
	i = 0;
	while (src[i] != '\0')
	{
		copie[i] = src[i];
		i++;
	}
	copie[i] = '\0';
	return (copie);
}

int		main(void)
{
	char *src = "oui je le suis";

	printf("%s" "%s",src, ft_strdup(src));
	return (0);
}
