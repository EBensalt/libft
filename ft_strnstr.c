/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebensalt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 13:48:34 by ebensalt          #+#    #+#             */
/*   Updated: 2021/11/25 02:25:24 by ebensalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	f1(const char *needle)
{
	size_t	a;

	a = 0;
	while (needle[a] != '\0')
		a++;
	return (a);
}

static char	*f2(const char *haystack, const char *needle, size_t len)
{
	size_t	a;
	size_t	b;
	size_t	c;

	a = 0;
	while (a < len && haystack[a] != '\0')
	{
		b = 0;
		c = a;
		if (needle[b] == haystack[c] && needle[b] != '\0')
		{
			while (needle[b] == haystack[c] && needle[b] != '\0' && c < len)
			{
				c++;
				b++;
			}
			if (needle[b] == '\0')
				return ((char *)(haystack + a));
		}
		a++;
	}
	return (0);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	a;
	char	*b;

	a = f1(needle);
	if (a == 0)
		return ((char *)haystack);
	b = f2(haystack, needle, len);
	return (b);
}
