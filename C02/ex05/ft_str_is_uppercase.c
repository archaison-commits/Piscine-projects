/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brechied <brechied@student.42warsaw.p      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 18:15:50 by brechied          #+#    #+#             */
/*   Updated: 2026/05/19 18:35:22 by brechied         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || str[i] > 'Z')
			return (0);
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	char	*str1 = "ASDWDD";
	char	*str2 = "123edeA";
	char	*str3 = "";

	printf(": %d\n", ft_str_is_uppercase(str1));
	printf(": %d\n", ft_str_is_uppercase(str2));
	printf(": %d\n", ft_str_is_uppercase(str3));
	return (0);
}*/
