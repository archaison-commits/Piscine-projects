/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brechied <brechied@student.42warsaw.p      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/26 16:58:14 by brechied          #+#    #+#             */
/*   Updated: 2026/05/26 21:18:13 by brechied         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	fact;

	fact = 1;
	if (nb < 0)
		return (0);
	while (nb > 1)
	{
		fact = nb * fact;
		nb--;
	}
	return (fact);
}
/*
int	main(void)
{
	int	i;
	int	res;

	i = -8;
	res = ft_iterative_factorial(i);
	printf(": %d\n", res);
	return (0);
}*/
