/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebensalt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 18:35:12 by ebensalt          #+#    #+#             */
/*   Updated: 2021/11/25 03:27:47 by ebensalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	f1(const char *s, unsigned int start)
{
	size_t	a;

	a = 0;
	while (s[a] != '\0')
		a++;
	if (a < start)
		return (0);
	return (a);
}

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*a;
	size_t	b;
	size_t	c;
	size_t	d;

	if (s == NULL)
		return (0);
	c = 0;
	d = f1(s, start);
	if (start > d)
		len = 0;
	while (s[c] != '\0' && c < len)
		c++;
	a = (char *)malloc((c + 1) * sizeof(char));
	if (a == NULL)
		return (0);
	b = 0;
	while (s[start] != '\0' && b < len)
	{
		a[b] = s[start];
		b++;
		start++;
	}
	a[b] = '\0';
	return (a);
}
