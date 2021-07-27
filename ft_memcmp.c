/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogoushi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/18 15:52:25 by ogoushi           #+#    #+#             */
/*   Updated: 2021/04/18 15:52:30 by ogoushi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*dst1;
	const unsigned char	*dst2;
	size_t				i;

	i = 0;
	dst1 = (const unsigned char *)s1;
	dst2 = (const unsigned char *)s2;
	while (i < n)
	{
		if (dst1[i] != dst2[i])
			return (dst1[i] - dst2[i]);
		i++;
	}
	return (0);
}
