/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wel-mjiy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 16:09:43 by wel-mjiy          #+#    #+#             */
/*   Updated: 2024/08/10 18:08:55 by wel-mjiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int		i;
	int		*dest;

	dest = (int *)malloc((max - min) * sizeof(int));
	if (!(dest))
		return (NULL);
	i = 0;
	if (min < max)
	{
		while (min < max)
		{
			dest[i] = min;
			min++;
			i++;
		}
	}
	else
		return (NULL);
	return (dest);
}
