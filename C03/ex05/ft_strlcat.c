/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brechied <brechied@student.42warsaw.p      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 22:42:51 by brechied          #+#    #+#             */
/*   Updated: 2026/06/23 22:56:23 by brechied         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <bsd/string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	k;

	i = 0;
	while (i < size && dest[i])
		i++;
	j = 0;
	while (src[j] != '\0')
		j++;
	if (i == size)
		return (size + j);
	k = 0;
	while (i + k < size - 1 && src[k])
	{
		dest[i + k] = src[k];
		k++;
	}
	if (i + k < size)
		dest[i + k] = '\0';
	return (i + j);
}
/*
int	main(void)
{
        char    dest[] = "Please let me in";
        char    src[] = "Maybe not";
        unsigned int    size = 20;

        printf(":%ld\n", ft_strlcat(dest, src, size));
        printf(":%ld\n", strlcat(dest, src, size));
        printf(":%s\n", dest);
        return (0);
}*/
