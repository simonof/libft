/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogoushi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 17:03:20 by ogoushi           #+#    #+#             */
/*   Updated: 2021/04/21 17:03:22 by ogoushi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>
#include "libft.h"
char	*ft_strtrim(char const *s1, char const *set)
{
	char	*tmp;
	size_t	first;
	size_t	last;

	if (!s1)
		return (NULL);
	first = 0;
	last = ft_strlen(s1);
	while (s1[first] && ft_strchr(set, s1[first]))
		first++;
	while (last > first && ft_strchr(set, s1[last -1]))
		last--;
	tmp = ft_substr(s1, first, last - first);
	return (tmp);
}
