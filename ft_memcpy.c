/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogoushi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/18 15:51:13 by ogoushi           #+#    #+#             */
/*   Updated: 2021/04/18 15:51:16 by ogoushi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	const char	*source;
	char		*destination;
	size_t		i;

	i = n;
	source = (const char *)src;
	destination = (char *)dst;
	if ((dst == src) || n == 0)
		return (dst);
	while (i--)
		destination[i] = source[i];
	return (dst);
}
