/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebensalt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 12:26:51 by ebensalt          #+#    #+#             */
/*   Updated: 2021/11/25 20:16:20 by ebensalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char		*a;
	const char	*b;
	size_t		c;

	a = (char *)dst;
	b = (const char *)src;
	c = 0;
	if (a == 0 && b == 0)
		return (0);
	if (a > b && b + n > a)
	{
		while (c < n)
		{
			a[n - 1] = b[n - 1];
			n--;
		}
	}
	while (c < n)
	{
		a[c] = b[c];
		c++;
	}
	return (a);
}
