/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imurawsk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/28 20:23:35 by imurawsk          #+#    #+#             */
/*   Updated: 2016/10/03 00:19:12 by imurawsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_check_int_length(int n)
{
	int i;
	int t;

	t = n;
	i = 0;
	if (n <= 0)
		i++;
	while (t != 0)
	{
		t /= 10;
		i++;
	}
	return (i);
}

static void	rev_str(char *p)
{
	int		i;
	int		j;
	char	c;

	i = 0;
	j = ft_strlen(p) - 1;
	if (p[0] == '-')
		i++;
	while (i < j)
	{
		c = p[i];
		p[i] = p[j];
		p[j] = c;
		i++;
		j--;
	}
}

char		*ft_itoa(int n)
{
	char	*res;
	size_t	i;

	i = 0;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n == 0)
		return (ft_strdup("0"));
	res = (char *)malloc(sizeof(char) * (ft_check_int_length(n) + 1));
	if (!res)
		return (NULL);
	if (n < 0)
	{
		n *= -1;
		res[i++] = '-';
	}
	while (n != 0)
	{
		res[i++] = (n % 10) + '0';
		n /= 10;
	}
	res[i] = '\0';
	rev_str(res);
	return (res);
}
