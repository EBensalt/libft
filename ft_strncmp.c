/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebensalt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 17:19:46 by ebensalt          #+#    #+#             */
/*   Updated: 2021/11/29 22:55:25 by ebensalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			a;
	unsigned char	*b;
	unsigned char	*c;
	size_t			d;

	b = (unsigned char *)s1;
	c = (unsigned char *)s2;
	a = 0;
	d = 0;
	while (b[d] || c[d])
		d++;
	while (a < n && a < d)
	{
		if (b[a] > c[a])
			return (b[a] - c[a]);
		if (b[a] < c[a])
			return (b[a] - c[a]);
		a++;
	}
	return (0);
}
