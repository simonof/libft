/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogoushi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 18:16:15 by ogoushi           #+#    #+#             */
/*   Updated: 2021/04/19 18:16:17 by ogoushi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	if ((char) c == '\0')
		return ((char *) s + i);
	while (i--)
		if (s[i] == c)
			return ((char *) s + i);
	return (0);
}
