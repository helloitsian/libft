/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imurawsk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/15 17:45:38 by imurawsk          #+#    #+#             */
/*   Updated: 2016/10/03 19:30:10 by imurawsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*n1;
	unsigned char	*n2;

	i = 0;
	n1 = (unsigned char *)s1;
	n2 = (unsigned char *)s2;
	if (*n1 == '\0' || *n2 == '\0')
	{
		if (*n1 == '\0' && *n2 != '\0')
			return (*n1 - *n2);
		else if (*n1 != '\0' && *n2 == '\0')
			return (*n1 - *n2);
	}
	while (i < n && *n2 != '\0')
	{
		if (*n1 != *n2)
			return (*n1 - *n2);
		i++;
		n1++;
		n2++;
	}
	return (0);
}
