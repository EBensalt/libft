/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebensalt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 21:19:40 by ebensalt          #+#    #+#             */
/*   Updated: 2021/11/29 23:18:52 by ebensalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	a;
	size_t	b;
	size_t	c;

	a = 0;
	while (src[a] != '\0')
		a++;
	if (dstsize == 0)
		return (a);
	b = 0;
	while (dst[b] != '\0')
		b++;
	if (dstsize <= b)
		return (a + dstsize);
	c = 0;
	while (c < (dstsize - b) - 1 && src[c] != '\0')
	{
		dst[b + c] = src[c];
		c++;
	}
	dst[b + c] = '\0';
	return (a + b);
}
