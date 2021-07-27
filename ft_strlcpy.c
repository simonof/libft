/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogoushi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 16:24:13 by ogoushi           #+#    #+#             */
/*   Updated: 2021/04/19 16:24:36 by ogoushi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	int	i;

	i = 0;
	if (!dst || !src)
		return (0);
	if (!dstsize)
		return (ft_strlen(src));
	dstsize = dstsize -1;
	while (dstsize && src[i])
	{
		dst[i] = src[i];
		++i;
		dstsize--;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}
