/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebensalt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 15:48:15 by ebensalt          #+#    #+#             */
/*   Updated: 2021/11/29 13:03:21 by ebensalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*a;
	size_t	b;

	a = malloc(count * size);
	if (a == NULL)
		return (0);
	b = 0;
	while (b < (count * size))
	{
		a[b] = '\0';
		b++;
	}
	return (a);
}
