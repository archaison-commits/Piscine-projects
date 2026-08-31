/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brechied <brechied@student.42warsaw.p      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 18:53:29 by brechied          #+#    #+#             */
/*   Updated: 2026/05/19 19:44:45 by brechied         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
			return (0);
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	char	*str1 = "'\1'";
	char	*str2 = "33$#441";
	char	*str3 = "";

	printf(": %d\n", ft_str_is_printable(str1));
	printf(": %d\n", ft_str_is_printable(str2));
	printf(": %d\n", ft_str_is_printable(str3));
	return (0);
}*/
