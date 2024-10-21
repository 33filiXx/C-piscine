/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wel-mjiy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 10:55:05 by wel-mjiy          #+#    #+#             */
/*   Updated: 2024/07/28 14:23:42 by wel-mjiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	else if (nb >= 0 && nb <= 9)
	{
		putchar(nb + 48);
	}
	else if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		putchar((nb % 10) + 48);
	}
	else
	{
		putchar('-');
		ft_putnbr(-nb);
	}
}
