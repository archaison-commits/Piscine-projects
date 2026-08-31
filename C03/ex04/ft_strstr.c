/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brechied <brechied@student.42warsaw.p      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 21:16:29 by brechied          #+#    #+#             */
/*   Updated: 2026/05/22 00:40:40 by brechied         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	char	*i;
	char	*j;

	if (*to_find == '\0')
		return (str);
	while (*str != '\0')
	{
		i = str;
		j = to_find;
		while (*i == *j && *j != '\0')
		{
			i++;
			j++;
		}
		if (*j == '\0')
			return (str);
		str++;
	}
	return (0);
}
/*
int	main(void)
{
	char	s[] = "Send help right now";
	char	s1[] = "help";

	printf(": %s\n", ft_strstr(s, s1));
	return (0);
}*/
