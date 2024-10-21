/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wel-mjiy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 20:35:48 by wel-mjiy          #+#    #+#             */
/*   Updated: 2024/08/05 17:08:40 by wel-mjiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	j;

	j = 1;
	if (nb == 0)
		return (1);
	else if (nb > 0)
	{
		while (nb > 0)
		{
			j *= nb;
			nb--;
		}
	}
	else
		j = 0;
	return (j);
}
