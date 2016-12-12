/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imurawsk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/27 23:42:48 by imurawsk          #+#    #+#             */
/*   Updated: 2016/10/01 05:53:28 by imurawsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*t;
	int		l1;
	int		l2;
	int		i;
	int		j;

	j = -1;
	i = -1;
	if (s1 && s2)
	{
		l1 = ft_strlen((char *)s1);
		l2 = ft_strlen((char *)s2);
		t = (char *)malloc(sizeof(char) * l1 + l2 + 1);
		if (!t)
			return (NULL);
		while (s1[++i])
			t[i] = s1[i];
		while (s2[++j])
			t[i++] = s2[j];
		t[i] = '\0';
		return (t);
	}
	return (NULL);
}
