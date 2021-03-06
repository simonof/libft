/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogoushi <ogoushi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 09:50:01 by ogoushi           #+#    #+#             */
/*   Updated: 2021/02/22 10:02:03 by ogoushi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}
