/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brechied <brechied@student.42warsaw.p      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/12 21:23:50 by brechied          #+#    #+#             */
/*   Updated: 2026/05/13 14:11:30 by brechied         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	a;

	if (nb == -2147483648)
	{
		write(1, "-2", 2);
		nb = 147483648;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
	}
	a = (nb % 10) + '0';
	write(1, &a, 1);
}
/*
int	main(void)
{
	ft_putnbr(-2147483648);
	write(1, " ", 1);
	ft_putnbr(42);
	write(1, " ", 1);
	ft_putnbr(2147483647);
}*/
