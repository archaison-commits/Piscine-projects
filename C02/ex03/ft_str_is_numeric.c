/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brechied <brechied@student.42warsaw.p      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 15:11:30 by brechied          #+#    #+#             */
/*   Updated: 2026/05/19 18:30:19 by brechied         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	char	*str1 = "41231231";
	char	*str2 = "Thisone1no23";
	char	*str3 = "";

	printf("str1 %d\n", ft_str_is_numeric(str1));
	printf("str1 %d\n", ft_str_is_numeric(str2));
	printf("str1 %d\n", ft_str_is_numeric(str3));
	return (0);
}*/
