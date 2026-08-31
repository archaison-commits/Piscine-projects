/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brechied <brechied@student.42warsaw.p      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/08 19:42:41 by brechied          #+#    #+#             */
/*   Updated: 2026/05/13 14:12:50 by brechied         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int i, int j, int x)
{
	char	a;
	char	b;
	char	c;

	a = i + '0';
	b = j + '0';
	c = x + '0';
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
	if (i < 7)
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	int	i;
	int	j;
	int	x;

	i = 0;
	while (i <= 7)
	{
		j = i + 1;
		while (j <= 8)
		{
			x = j + 1;
			while (x <= 9)
			{
				ft_putchar(i, j, x);
				++x;
			}
			++j;
		}
		++i;
	}
}
/*
int	main(void)
{
	ft_print_comb();
	return (0);
}*/
