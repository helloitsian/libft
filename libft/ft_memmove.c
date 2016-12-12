/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imurawsk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/30 18:16:20 by imurawsk          #+#    #+#             */
/*   Updated: 2016/09/30 18:16:30 by imurawsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char *csrc;
	unsigned char *cdst;

	csrc = (unsigned char *)src;
	cdst = (unsigned char *)dst;
	if (dst < src)
		ft_memcpy(dst, src, len);
	else
		while (len--)
			cdst[len] = csrc[len];
	return (dst);
}
