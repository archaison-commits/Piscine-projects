/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brechied <brechied@student.42warsaw.p      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/13 22:15:04 by brechied          #+#    #+#             */
/*   Updated: 2026/05/13 23:21:14 by brechied         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
void 	main(void)
{
	int	i;
	int	j;
	int	div;
	int	mod;

	i = 22;
	j = 11;
	ft_div_mod(i, j, &div, &mod);	
	printf("Value of division: %d\n" , div);
	printf("Value of mod: %d\n" , mod);
}*/
