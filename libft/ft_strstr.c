/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imurawsk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/15 14:04:53 by imurawsk          #+#    #+#             */
/*   Updated: 2016/09/30 19:27:55 by imurawsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *big, const char *little)
{
	int		i;
	int		j;
	int		c;
	char	*p;

	p = (char *)big;
	j = 0;
	i = 0;
	c = 0;
	if (ft_strlen((char *)little) == 0 || big == little)
		return ((char *)big);
	while (big[i] != '\0')
	{
		j = 0;
		if (big[i] == little[0])
		{
			c = i;
			while (big[c++] == little[j++])
				if (little[j] == '\0')
					return ((char *)(big + i));
		}
		i++;
	}
	return (NULL);
}
