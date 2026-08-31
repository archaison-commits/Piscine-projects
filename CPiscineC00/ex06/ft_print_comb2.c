/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brechied <brechied@student.42warsaw.p      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/11 17:43:04 by brechied          #+#    #+#             */
/*   Updated: 2026/05/13 16:17:00 by brechied         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int i, int j)
{
	char	a;
	char	b;
	char	c;
	char	d;

	a = (i / 10) + '0';
	b = (i % 10) + '0';
	c = (j / 10) + '0';
	d = (j % 10) + '0';
	if (i != j)
	{
		write(1, &a, 1);
		write(1, &b, 1);
		write(1, " ", 1);
		write(1, &c, 1);
		write(1, &d, 1);
	}
	if (i < 98 || j < 99)
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	while (i <= 98)
	{
		j = i + 1;
		while (j <= 99)
		{
			ft_putchar(i, j);
			++j;
		}
		++i;
	}
}

int	main(void)
{
	ft_print_comb2();
	return (0);
}

