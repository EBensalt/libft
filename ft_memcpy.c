/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebensalt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 11:52:04 by ebensalt          #+#    #+#             */
/*   Updated: 2021/11/22 22:54:43 by ebensalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*a;
	const char	*b;
	size_t		c;

	a = (char *)dst;
	b = (const char *)src;
	c = 0;
	if (a == 0 && b == 0)
		return (0);
	while (c < n)
	{
		a[c] = b[c];
		c++;
	}
	return (a);
}
#include <stdio.h>

int main()
{
	int	a[5] = {1, 2, 3, 4, 5};
	int	b[10];
	int c;

	ft_memcpy(b, a, 4 * sizeof(int));
	c = 0;
	while (c < 4)
	{
		printf("%d\n", b[c]);
		c++;
	}
}