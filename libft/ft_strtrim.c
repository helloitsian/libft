/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imurawsk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/28 15:00:15 by imurawsk          #+#    #+#             */
/*   Updated: 2016/10/02 18:57:14 by imurawsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t	i;
	size_t	l;
	char	*temp;

	i = 0;
	if (!s)
		return (NULL);
	l = 0;
	while (s[i] && (s[i] == ' ' || s[i] == '\t' || s[i] == '\n'))
		i++;
	l = ft_strlen(&s[i]) - 1;
	while (s[i] && (s[l + i] == ' ' || s[l + i] == '\t' || s[l + i] == '\n'))
		l--;
	temp = ft_strnew(l + 1);
	if (!temp)
		return (NULL);
	ft_strncpy(temp, s + i, l + 1);
	return (temp);
}
