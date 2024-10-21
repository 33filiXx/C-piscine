/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wel-mjiy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 17:41:41 by wel-mjiy          #+#    #+#             */
/*   Updated: 2024/08/05 21:07:18 by wel-mjiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	j;

	j = 0;
	if (nb == 1)
		return (1);
	while (j < nb)
	{
		if (j * j == nb)
		{
			return (j);
		}
		j++;
	}
	return (0);
}