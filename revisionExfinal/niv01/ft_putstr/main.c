/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmendy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/26 18:50:16 by jmendy            #+#    #+#             */
/*   Updated: 2016/07/26 18:51:28 by jmendy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str);

int		main(void)
{
	char *str = "oui tu as reussi";

	ft_putstr(str);
	return (0);
}