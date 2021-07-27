/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogoushi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/18 15:51:47 by ogoushi           #+#    #+#             */
/*   Updated: 2021/04/18 15:51:49 by ogoushi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*source;
	unsigned char	*destination;
	size_t			i;

	source = (unsigned char *)src;
	destination = (unsigned char *)dst;
	i = 0;
	while (i < n)
	{
		destination[i] = source[i];
		if (source[i] == (unsigned char)c)
			return ((void *)(destination + i + 1));
		i++;
	}
	return (NULL);
}
