/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wel-mjiy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 15:02:51 by wel-mjiy          #+#    #+#             */
/*   Updated: 2024/07/28 18:12:50 by wel-mjiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_put_char(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_put_char(a / 10 + 48);
			ft_put_char(a % 10 + 48);
			ft_put_char(' ');
			ft_put_char(b / 10 + 48);
			ft_put_char(b % 10 + 48);
			if (a < 98)
			{
				ft_put_char(',');
				ft_put_char(' ');
			}
			b++;
		}
		a++;
	}
}
