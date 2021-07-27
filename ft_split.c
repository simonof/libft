/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogoushi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/22 14:52:38 by ogoushi           #+#    #+#             */
/*   Updated: 2021/04/22 14:52:41 by ogoushi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdlib.h>

static size_t	ft_coutn(char const *s, char c)
{
	size_t	cnt;

	cnt = 0;
	while (*s != '\0')
	{
		while (*s == c)
			s++;
		if (*s)
		{
			cnt++;
			while (*s != '\0' && *s != c)
				s++;
		}
	}
	return (cnt);
}

static void	*ft_free(char **s, size_t i)
{
	while (i--)
		free(s[i]);
	free(s);
	return (NULL);
}

static char	*ft_swords(char const **st, char c)
{
	size_t	i;
	char	*words;

	i = 0;
	while ((*st)[i] != '\0' && (*st)[i] != c)
		i++;
	words = ft_substr(*st, 0, i);
	*st = *st + i;
	if (words == NULL)
		return (NULL);
	return (words);
}

char	**ft_split(char const *s, char c)
{
	char	**tmp;
	size_t	i;

	i = 0;
	if (!s)
		return (NULL);
	tmp = (char **)malloc(sizeof(char *) * (ft_coutn(s, c) + 1));
	if (tmp == NULL)
		return (NULL);
	while (*s != '\0')
	{
		while (*s == c)
			s++;
		if (*s)
		{
			tmp[i] = ft_swords(&s, c);
			if (tmp[i] == NULL)
				return (ft_free(tmp, i));
			i++;
		}
	}
	tmp[i] = NULL;
	return (tmp);
}
