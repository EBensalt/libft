/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebensalt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 11:43:13 by ebensalt          #+#    #+#             */
/*   Updated: 2021/11/24 01:05:47 by ebensalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	a;
	size_t			d;
	unsigned char	*e;

	a = (unsigned char)c;
	d = 0;
	e = (unsigned char *)s;
	while (d < n)
	{
		if (e[d] == a)
			return ((void *)e + d);
		d++;
	}
	return (0);
}
