/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstaddend.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oltkache <oltkache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 13:34:15 by oltkache          #+#    #+#             */
/*   Updated: 2017/12/10 17:39:52 by oltkache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

t_list	*ft_lstaddend(t_list *lst, void *new)
{
	t_list *temp;

	temp = lst;
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = (t_list*)malloc(sizeof(t_list));
	temp->next->content = new;
	temp->next->next = NULL;
	return (lst);
}
