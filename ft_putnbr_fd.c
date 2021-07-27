/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogoushi <ogoushi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 12:24:07 by ogoushi           #+#    #+#             */
/*   Updated: 2021/02/22 17:15:55 by ogoushi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_putnbr_fd(int n, int fd)
{
	char	tmp;

	if (n == -2147483648)
		write(fd, "-2147483648", 11);
	else
	{
		if (n < 0)
		{
			write(fd, "-", 1);
			n = -n;
			ft_putnbr_fd(n, fd);
		}
		else if (n < 10)
		{
			tmp = n + '0';
			write(fd, &tmp, 1);
		}
		else
		{
			ft_putnbr_fd(n / 10, fd);
			tmp = (n % 10) + '0';
			write(fd, &tmp, 1);
		}
	}
}
