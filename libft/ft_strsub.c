/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imurawsk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/28 12:52:09 by imurawsk          #+#    #+#             */
/*   Updated: 2016/10/01 06:18:37 by imurawsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*res;
	int		i;

	i = 0;
	if (s)
		res = (char *)malloc(sizeof(char) * len + 1);
	else
		res = NULL;
	if (res)
	{
		while (s[start])
		{
			res[i] = s[start];
			start++;
			i++;
		}
		res[len] = '\0';
		return (res);
	}
	return (NULL);
}
