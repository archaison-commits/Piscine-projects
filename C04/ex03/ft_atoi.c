/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brechied <brechied@student.42warsaw.p      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 17:57:26 by brechied          #+#    #+#             */
/*   Updated: 2026/05/27 00:17:12 by brechied         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_atoi(char *str)
{
	int	i;
	int	n;
	int	res;

	i = 0;
	res = 0;
	n = 1;
	while (str[i] == ' ' || str[i] == '\f'
			|| str[i] == '\n'|| str[i] == '\t'
			|| str[i] == '\v'|| str[i] == '\r')
			i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			n = n * -(1);
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + str[i] - '0';
		i++;
	}
	return (res * n);
}
/*
int	main(void)
{
	char	a[] = " ---+--+1234ab567";
	int	val = ft_atoi(a);

	printf(": %s\n", a);
	printf(": %d\n", val);
	return (0);
}*/
