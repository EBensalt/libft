/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebensalt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 12:29:04 by ebensalt          #+#    #+#             */
/*   Updated: 2021/11/29 12:45:03 by ebensalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			a;
	unsigned char	*b;
	unsigned char	*c;

	a = 0;
	b = (unsigned char *)s1;
	c = (unsigned char *)s2;
	while (a < n)
	{
		if (b[a] > c[a])
			return (b[a] - c[a]);
		if (b[a] < c[a])
			return (b[a] - c[a]);
		a++;
	}
	return (0);
}
