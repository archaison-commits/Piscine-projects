/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brechied <brechied@student.42warsaw.p      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/13 23:22:39 by brechied          #+#    #+#             */
/*   Updated: 2026/05/14 01:21:24 by brechied         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	k;
	int	x;

	k = *a;
	x = *b;
	*a = k / x;
	*b = k % x;
}
/*
int	main(void)
{
	int	i;
	int	j;

	i = 12;
	j = 5;
	ft_ultimate_div_mod(&i, &j);
	printf("Value of a: %d\n", i);
	printf("Value of b: %d\n", j);
	return (0);
}*/
