/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imurawsk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/15 13:01:16 by imurawsk          #+#    #+#             */
/*   Updated: 2016/10/03 22:01:31 by imurawsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	const unsigned char *csrc;
	unsigned char		*cdst;

	csrc = (const unsigned char *)src;
	cdst = (unsigned char *)dst;
	if (n)
	{
		while (n != 0)
		{
			if ((*cdst++ = *csrc++) == (unsigned char)c)
				return (cdst);
			n--;
		}
	}
	return (0);
}
