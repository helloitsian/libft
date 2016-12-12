/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imurawsk <imurawsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/29 10:11:28 by imurawsk          #+#    #+#             */
/*   Updated: 2016/11/17 17:27:05 by imurawsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	seclen(char const *s, char c)
{
	int	len;

	len = 0;
	while (*s == c)
		s++;
	while (*s && *s != c)
	{
		s++;
		len++;
	}
	return (len);
}

static int	words(char const *s, char c)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
			count++;
		while (s[i] != c && s[i + 1] != '\0')
			i++;
		i++;
	}
	return (count);
}

char		**ft_strsplit(char const *s, char c)
{
	char	**strs;
	int		i;
	int		j;
	int		k;

	if (!s)
		return (NULL);
	strs = (char**)malloc(sizeof(char*) * (words(s, c) + 1));
	if (!strs)
		return (NULL);
	i = -1;
	j = 0;
	while (++i < words(s, c))
	{
		k = 0;
		if ((strs[i] = (char*)malloc(sizeof(char) * (seclen(&s[j], c)))) == 0)
			return (NULL);
		while (s[j] == c)
			j++;
		while (s[j] != c && s[j] != '\0')
			strs[i][k++] = s[j++];
		strs[i][k] = '\0';
	}
	strs[words(s, c)] = 0;
	return (strs);
}
