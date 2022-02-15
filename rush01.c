/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahatay <ahatay@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 21:02:51 by ahatay            #+#    #+#             */
/*   Updated: 2021/11/28 13:42:21 by ahatay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	kontrol(int a, int b, int x, int y)
{
	while (b <= y)
	{
		while (a <= x)
		{
			if ((a == 1 && b == 1) || (a == x && b == y && x != 1 && y != 1))
				ft_putchar('/');
			else if ((a == x && b == 1) || (a == 1 && b == y))
				write(1, "\\", 1);
			else if ((a > 1 && a < x) && (b > 1 && b < y))
				ft_putchar(' ');
			else
				ft_putchar('*');
			a++;
		}
		write(1, "\n", 1);
		a = 1;
		b++;
	}
}

void	rush(int x, int y)
{
	int	a;
	int	b;

	a = 1;
	b = 1;
	if (x >= 0 && y >= 0)
	{
		kontrol(a, b, x, y);
	}
}
