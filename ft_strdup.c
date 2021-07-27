/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogoushi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 17:12:16 by ogoushi           #+#    #+#             */
/*   Updated: 2021/04/20 17:12:18 by ogoushi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strdup(const char *s1)
{
	char	*tmp;
	int		i;

	i = 0;
	tmp = (malloc(sizeof(char) * ft_strlen(s1) + 1));
	if (!tmp)
		return (0);
	tmp = ft_memcpy(tmp, s1, ft_strlen(s1) + 1);
	return (tmp);
}
