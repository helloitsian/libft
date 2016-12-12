/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imurawsk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/23 11:11:04 by imurawsk          #+#    #+#             */
/*   Updated: 2016/09/30 20:06:56 by imurawsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_recursive_fd(long z, int fd)
{
	if (z == 0)
		return ;
	ft_recursive_fd(z / 10, fd);
	z = z % 10;
	ft_putchar_fd(z + '0', fd);
}

void		ft_putnbr_fd(int n, int fd)
{
	long l;

	l = n;
	if (l < 0)
	{
		ft_putchar_fd('-', fd);
		l *= -1;
	}
	if (l == 0)
		ft_putchar_fd('0', fd);
	else if (l > 0)
	{
		ft_recursive_fd(l, fd);
	}
}
