/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oltkache <oltkache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/30 20:22:42 by oltkache          #+#    #+#             */
/*   Updated: 2017/12/10 17:46:31 by oltkache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void	ft_striter(char *s, void (*f)(char*))
{
	int i;

	i = 0;
	if (!f)
		return ;
	while (s != NULL && s[i] != '\0')
		f(&s[i++]);
}