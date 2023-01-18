/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebensalt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 21:39:10 by ebensalt          #+#    #+#             */
/*   Updated: 2021/11/26 01:09:27 by ebensalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	f1(char const *s1, char const *set)
{
	int		a;
	int		b;

	a = 0;
	b = 0;
	while (set[a] != '\0')
	{
		if (s1[b] == set[a])
		{
			b++;
			a = 0;
		}
		else
			a++;
	}
	return (b);
}

static int	f2(char const *s1, char const *set)
{
	int	a;
	int	c;

	c = 0;
	while (s1[c] != '\0')
		c++;
	a = 0;
	while (set[a] != '\0')
	{
		if (s1[c - 1] == set[a])
		{
			c--;
			a = 0;
		}
		else
			a++;
	}
	return (c);
}

char	*ft_strtrim(char const *s1, const char *set)
{
	char	*a;
	int		b;
	int		c;
	int		d;
	int		e;

	if (!s1)
		return (0);
	c = f1(s1, set);
	d = f2(s1, set);
	e = d - c;
	if ((d - c) < 0)
		e = 0;
	a = malloc((e + 1) * sizeof(char));
	if (a == NULL)
		return (0);
	b = 0;
	while (c < d && s1[c] != '\0')
	{
		a[b] = s1[c];
		b++;
		c++;
	}
	a[b] = '\0';
	return (a);
}
