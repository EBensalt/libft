/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebensalt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 00:27:10 by ebensalt          #+#    #+#             */
/*   Updated: 2021/11/25 03:36:31 by ebensalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	a;

	if (!s)
		return ;
	a = 0;
	while (s[a] != '\0')
		a++;
	write(fd, s, a);
	write(fd, "\n", 1);
}
