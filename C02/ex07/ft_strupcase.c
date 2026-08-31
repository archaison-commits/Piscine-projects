/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brechied <brechied@student.42warsaw.p      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 20:04:25 by brechied          #+#    #+#             */
/*   Updated: 2026/05/19 20:41:20 by brechied         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
/*
int	main(void)
{
	char	str1[] = "h-Llo";
	char	str2[] = "noOoOo";
	char	str3[] = "i need to pass the exam";

	printf(": %s\n", ft_strupcase(str1));
	printf(": %s\n", ft_strupcase(str2));
	printf(": %s\n", ft_strupcase(str3));
	return (0);
}*/
