/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oltkache <oltkache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/30 20:23:54 by oltkache          #+#    #+#             */
/*   Updated: 2017/12/10 17:45:57 by oltkache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*res;
	size_t	i;

	i = 0;
	res = (char*)malloc(sizeof(char) * (len + 1));
	if (!s || !res)
		return (NULL);
	while (i < len)
	{
		res[i] = s[start];
		++start;
		++i;
	}
	res[i] = '\0';
	return (res);
}
