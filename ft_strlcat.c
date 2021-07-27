/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogoushi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 17:21:36 by ogoushi           #+#    #+#             */
/*   Updated: 2021/04/19 17:21:39 by ogoushi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	n;
	size_t	ret;

	i = 0;
	n = 0;
	while (dst[i] != '\0' && i < dstsize)
	{
		i++;
	}
	while (src[n] != '\0' && (i + n + 1) < dstsize)
	{
		dst[i + n] = src[n];
		n++;
	}
	if (i < dstsize)
		dst[i + n] = '\0';
	ret = (i + ft_strlen(src));
	return (ret);
}
