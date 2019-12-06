/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imurawsk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/14 21:13:51 by imurawsk          #+#    #+#             */
/*   Updated: 2016/10/03 19:42:13 by imurawsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	skip_whitespace(const char *str, int i)
{
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
			str[i] == '\r' || str[i] == '\v' || str[i] == '\f')
		i++;
	return (i);
}

static int	find_sign(const char *str, int i)
{
	if (str[i] == '-')
		return (-1);
	else
		return (1);
}

int			ft_atoi(const char *str)
{
	int res;
	int i;
	int sign;

	res = 0;
	i = skip_whitespace(str, 0);
	sign = find_sign(str, i);
	if (str[i] == '-' || str[i] == '+')
		i += 1;
	while ((str[i] >= 48 && str[i] <= 57) && (str[i] != '\0'))
	{
		res = (res * 10) + (str[i] - '0');
		i++;
	}
	return (res * sign);
}
