/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brechied <brechied@student.42warsaw.p      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 15:11:30 by brechied          #+#    #+#             */
/*   Updated: 2026/05/19 22:47:46 by brechied         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		{
			if ((str[i] < 'a' || str[i] > 'z')
				&& (str[i] < 'A' || str[i] > 'Z'))
				return (0);
		}
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	char	*str1 = "LetMePass";
	char	*str2 = "Thisone1no23";
	char	*str3 = "";

	printf("str1 %d\n", ft_str_is_alpha(str1));
	printf("str1 %d\n", ft_str_is_alpha(str2));
	printf("str1 %d\n", ft_str_is_alpha(str3));
	return (0);
}*/
