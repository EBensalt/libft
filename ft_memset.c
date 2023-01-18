/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebensalt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 18:19:52 by ebensalt          #+#    #+#             */
/*   Updated: 2021/11/27 22:33:28 by ebensalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	a;
	char			*d;
	size_t			e;

	a = (unsigned char)c;
	d = (char *)b;
	e = 0;
	while (e < len)
	{
		d[e] = a;
		e++;
	}
	return (d);
}
