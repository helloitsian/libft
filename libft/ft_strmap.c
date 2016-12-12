/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imurawsk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/26 22:18:59 by imurawsk          #+#    #+#             */
/*   Updated: 2016/10/01 05:30:14 by imurawsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*res;
	int		i;

	i = 0;
	if (!s || !f)
		return (NULL);
	res = (char *)malloc(sizeof(char) * ft_strlen((char *)s) + 1);
	if (res)
	{
		while (*s)
			res[i++] = f((char)*s++);
		res[i] = '\0';
		return (res);
	}
	return (NULL);
}
