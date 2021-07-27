/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogoushi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 17:03:06 by ogoushi           #+#    #+#             */
/*   Updated: 2021/04/17 17:08:35 by ogoushi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*u;
	size_t			lengh;

	lengh = len;
	u = b;
	while (lengh--)
	{
		*u = (unsigned char)c;
		u++;
	}
	return (b);
}
