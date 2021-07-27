/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogoushi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 16:24:31 by ogoushi           #+#    #+#             */
/*   Updated: 2021/04/21 16:24:33 by ogoushi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdlib.h>

static size_t	ft_counter(char const *s, unsigned int start)
{
	const char		*first;
	size_t			j;

	j = 0;
	first = s + start;
	while (*first)
	{
		j++;
		first++;
	}
	return (j);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*tmp;
	size_t			i;
	int				st;

	i = 0;
	st = start;
	if (!s)
		return (NULL);
	if (ft_counter(s, start) < len)
		len = ft_counter(s, start);
	tmp = (char *)malloc(sizeof(*s) * (len + 1));
	if (!tmp)
		return (NULL);
	if (start < ft_strlen(s))
	{
		while (i < len && s[i] != '\0')
		{
			tmp[i] = s[st++];
			i++;
		}
	}
	tmp[i] = '\0';
	return (tmp);
}
