/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogoushi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 18:23:47 by ogoushi           #+#    #+#             */
/*   Updated: 2021/04/19 18:23:50 by ogoushi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	unsigned int	i;
	unsigned int	l;

	i = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[i] != '\0' && i < len)
	{
		l = 0;
		if (haystack[i] == needle[l])
		{
			while (haystack[i + l] != '\0' && needle[l] != '\0'
				&& haystack[i + l] == needle[l] && i + l < len)
			{
				l++;
				if (!needle[l])
					return ((char *)&haystack[i]);
			}
		}
		i++;
	}
	return (0);
}
