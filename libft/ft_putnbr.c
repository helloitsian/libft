/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imurawsk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/23 11:11:04 by imurawsk          #+#    #+#             */
/*   Updated: 2016/10/03 00:25:13 by imurawsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_recursive(long z)
{
	if (z == 0)
		return ;
	ft_recursive(z / 10);
	z = z % 10;
	ft_putchar(z + '0');
}

void		ft_putnbr(int n)
{
	long l;

	l = n;
	if (l < 0)
	{
		ft_putchar('-');
		l *= -1;
	}
	if (l == 0)
		ft_putchar('0');
	else if (l > 0)
	{
		ft_recursive(l);
	}
}
