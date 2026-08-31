/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brechied <brechied@student.42warsaw.p      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 15:11:30 by brechied          #+#    #+#             */
/*   Updated: 2026/05/19 18:48:11 by brechied         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'a' || str[i] > 'z')
			return (0);
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	char	*str1 = "testlowercase";
	char	*str2 = "Thisone1no23";
	char	*str3 = "";

	printf("str1 %d\n", ft_str_is_lowercase(str1));
	printf("str1 %d\n", ft_str_is_lowercase(str2));
	printf("str1 %d\n", ft_str_is_lowercase(str3));
	return (0);
}*/
