/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imurawsk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/01 03:10:17 by imurawsk          #+#    #+#             */
/*   Updated: 2016/10/01 05:44:41 by imurawsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *res;
	t_list *tmpres;
	t_list *tmplst;

	if (lst == NULL || f == NULL)
		return (NULL);
	tmplst = f(lst);
	if ((res = ft_lstnew(tmplst->content, tmplst->content_size)))
	{
		tmpres = res;
		lst = lst->next;
		while (lst != NULL)
		{
			tmplst = f(lst);
			if (!(tmpres->next = ft_lstnew(tmplst->content,
				tmplst->content_size)))
				return (NULL);
			tmpres = tmpres->next;
			lst = lst->next;
		}
	}
	return (res);
}
