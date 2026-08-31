/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brechied <brechied@student.42warsaw.p      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 15:11:39 by brechied          #+#    #+#             */
/*   Updated: 2026/05/18 16:14:53 by brechied         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	while (i < size -1)
	{
		j = 0;
		while (j < size - i -1)
		{
			if (tab[j] > tab[j + 1])
			{
				temp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = temp;
			}
			++j;
		}
		i++;
	}
}
/*
int	main(void)
{
	int	ar_ex[]	= {3, 2, 5, 9, 1, 7};
	int	size;
	int	x;

	x = 0;
	size = sizeof (ar_ex) / sizeof(ar_ex[0]);
	ft_sort_int_tab(ar_ex, size);
	while (x < size)
	{
		printf("%d", ar_ex[x]);
		x++;
	}
	return (0);
}*/
