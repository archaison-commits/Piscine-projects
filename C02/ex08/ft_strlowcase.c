/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brechied <brechied@student.42warsaw.p      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 20:42:16 by brechied          #+#    #+#             */
/*   Updated: 2026/05/19 21:01:56 by brechied         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}
/*
int	main(void)
{
	char	str1[]= "HEllO";
	char	str2[]= "SendHelp";
	char	str3[]= "ToileT";

	printf(": %s\n", ft_strlowcase(str1));
	printf(": %s\n", ft_strlowcase(str2));
	printf(": %s\n", ft_strlowcase(str3));
	return (0);
}*/
