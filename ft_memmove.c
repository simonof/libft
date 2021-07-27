/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogoushi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/18 15:52:00 by ogoushi           #+#    #+#             */
/*   Updated: 2021/04/18 15:52:01 by ogoushi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*source;
	char	*destination;
	size_t	i;
	size_t	lengh;

	lengh = len;
	source = (char *)src;
	destination = (char *)dst;
	i = 0;
	if (dst == src)
		return (dst);
	if (source < destination)
	{
		while (lengh--)
			*(destination + lengh) = *(source + lengh);
		return (dst);
	}
	while (i < lengh)
	{
		destination[i] = source[i];
		i++;
	}
	return (dst);
}
