/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brechied <brechied@student.42warsaw.p      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/14 19:58:28 by brechied          #+#    #+#             */
/*   Updated: 2026/05/18 17:54:55 by brechied         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	while (i < size / 2)
	{
		temp = *(tab + i);
		*(tab + i) = *(tab + size -1 - i);
		*(tab + size -1 - i) = temp;
		i++;
	}
}
/*
int	main(void)
{
	int	ar_ex[] 
	
	int	size;
	int	i;

	ar_ex[] = {3, 4, 76 ,5 , 1, 4, 123,};
	i = 0;
	size = sizeof (ar_ex) / sizeof (ar_ex[0]);
	ft_rev_int_tab(ar_ex, size);
	while (i < size)
	{
		printf("Group B: %d\n", ar_ex[i]);
		i++;
	}
	return (0);
	//printf("Group B: %d\n", ar_ex[i]);
}*/
