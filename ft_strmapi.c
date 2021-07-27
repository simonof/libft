/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogoushi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 17:54:01 by ogoushi           #+#    #+#             */
/*   Updated: 2021/04/23 17:54:03 by ogoushi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*tmp;

	i = 0;
	if (!s)
		return (NULL);
	tmp = (char *)malloc(sizeof(char) * (ft_strlen(s)) + 1);
	if (tmp == NULL)
		return (NULL);
	if ((*f) == NULL)
		return (NULL);
	while (s[i])
	{
		tmp[i] = f(i, s[i]);
		i++;
	}
	tmp[i] = '\0';
	return (tmp);
}
