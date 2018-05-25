/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oltkache <oltkache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/01 20:38:41 by oltkache          #+#    #+#             */
/*   Updated: 2017/12/10 17:40:11 by oltkache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *new;
	t_list *head;

	new = (t_list*)malloc(sizeof(t_list));
	if (!new || !lst)
		return (NULL);
	new = f(lst);
	head = new;
	lst = lst->next;
	while (lst != NULL)
	{
		new->next = f(lst);
		new = new->next;
		lst = lst->next;
	}
	new = NULL;
	return (head);
}
