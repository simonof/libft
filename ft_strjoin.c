/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogoushi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 16:40:36 by ogoushi           #+#    #+#             */
/*   Updated: 2021/04/21 16:40:39 by ogoushi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*tmp;
	int		i1;
	int		i2;

	if (!s1 || !s2)
		return (NULL);
	i1 = ft_strlen(s1);
	i2 = ft_strlen(s2);
	tmp = malloc(sizeof(char) * (i1 +i2 + 1));
	if (!tmp)
		return (NULL);
	i1 = 0;
	i2 = 0;
	while (s1[i1])
	{
		tmp[i1] = s1[i1];
		i1++;
	}
	while (s2[i2])
	{
		tmp[i1 + i2] = s2[i2];
		i2++;
	}
	tmp[i1 + i2] = '\0';
	return (tmp);
}
