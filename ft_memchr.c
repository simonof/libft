/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogoushi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/18 15:52:11 by ogoushi           #+#    #+#             */
/*   Updated: 2021/04/18 15:52:14 by ogoushi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*source;
	size_t	i;
	char	ch;

	ch = c;
	source = (char *)s;
	i = 0;
	while (i < n)
	{
		if (source[i] == ch)
			return (source + i);
		i++;
	}
	return (NULL);
}
