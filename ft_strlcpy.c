/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebensalt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 14:28:47 by ebensalt          #+#    #+#             */
/*   Updated: 2021/11/24 03:29:12 by ebensalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	a;
	size_t	b;

	a = 0;
	while (src[a] != '\0')
		a++;
	b = a;
	if (!dst)
		return (a);
	a = 0;
	if (dstsize > 0)
	{
		while (a < (dstsize - 1) && src[a] != '\0')
		{
			dst[a] = src[a];
			a++;
		}
		dst[a] = '\0';
	}
	return (b);
}
