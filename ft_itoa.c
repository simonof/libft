/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogoushi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 17:38:21 by ogoushi           #+#    #+#             */
/*   Updated: 2021/04/23 17:38:23 by ogoushi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_len_of_s(int s)
{
	int	i;

	i = 0;
	if (s < 0)
	{
		s = s * -1;
		i++;
	}
	while (s > 0)
	{
		s = s / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char			*tmp;
	int				i;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n == 0)
		return (ft_strdup("0"));
	i = ft_len_of_s(n);
	tmp = (char *)malloc(sizeof(char) * (i + 1));
	if (!tmp)
		return (NULL);
	tmp[i] = '\0';
	i--;
	if (n < 0)
	{
		tmp[0] = '-';
		n = n * -1;
	}
	while (n > 0)
	{
		tmp[i] = 48 + (n % 10);
		n = n / 10;
		i--;
	}
	return (tmp);
}
