/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imurawsk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/22 20:03:08 by imurawsk          #+#    #+#             */
/*   Updated: 2016/10/02 22:34:23 by imurawsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	size_t i;

	i = ft_strlen(str);
	while (i != 0)
	{
		if (str[i] == c)
			return ((char *)str + i);
		i--;
	}
	if (i == 0 && str[i] != c)
		return (0);
	return ((char *)str + i);
}
