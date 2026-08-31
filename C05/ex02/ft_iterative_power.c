/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brechied <brechied@student.42warsaw.p      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/26 21:33:57 by brechied          #+#    #+#             */
/*   Updated: 2026/05/26 22:44:20 by brechied         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	fact;

	fact = 1;
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	while (power > 0)
	{
		fact = fact * nb;
		power--;
	}
	return (fact);
}
/*
int	main(void)
{
	int	i;
	int	j;
	int	res;

	i = 0;
	j = 6;
	res = ft_iterative_power(i, j);
	printf("%d\n", res);
	return (0);
}*/
