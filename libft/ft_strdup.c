/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imurawsk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/18 09:13:15 by imurawsk          #+#    #+#             */
/*   Updated: 2016/09/30 18:32:52 by imurawsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *src)
{
	char	*d;
	int		length;
	int		i;

	i = 0;
	length = 0;
	while (src[length])
		length++;
	d = (char *)malloc((1) * length + 1);
	if (d == '\0')
		return (NULL);
	while (i < length)
	{
		d[i] = src[i];
		i++;
	}
	d[i] = '\0';
	if (d == NULL)
		return (NULL);
	return (d);
}
