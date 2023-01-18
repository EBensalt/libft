/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebensalt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 05:17:31 by ebensalt          #+#    #+#             */
/*   Updated: 2021/11/25 03:32:48 by ebensalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	a;
	char			*b;

	if (!s)
		return (0);
	a = 0;
	while (s[a] != '\0')
		a++;
	b = (char *)malloc((a + 1) * sizeof(char));
	if (b == NULL)
		return (0);
	a = 0;
	while (s[a] != '\0')
	{
		b[a] = f(a, s[a]);
		a++;
	}
	b[a] = '\0';
	return (b);
}
