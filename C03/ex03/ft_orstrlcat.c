/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_orstrlcat.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brechied <brechied@student.42warsaw.p      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/23 22:23:26 by brechied          #+#    #+#             */
/*   Updated: 2026/06/23 22:28:27 by brechied         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <bsd/string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	char	*d = dst;
	const char	*s = src;
	size_t	n =size;
	size_t	dlen;

	while (n-- != 0 && *d != '\0')
		d++;
	dlen = d - dst;
	n = size - dlen;

	if (n == 0)
		return (dlen + strlen(s));
	while (*s != '\0')
	{
		if (n != 1)
		{
			*d++ = *s;
			n--;
		}
		s++;
	}
	*d = '\0';
	return (dlen + (s - src));	
}

int     main(void)
{
        char    dest[] = "Please let me in";
        char    src[] = "Maybe not";
        unsigned int    size = 20;

        printf(":%ld\n", ft_strlcat(dest, src, size));
        //printf(":%ld\n", strlcat(dest, src, size));
        printf(":%s\n", dest);
        return (0);
}

