/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oltkache <oltkache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/30 20:26:20 by oltkache          #+#    #+#             */
/*   Updated: 2017/12/10 17:41:26 by oltkache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*t;
	unsigned char	c1;

	c1 = (unsigned char)c;
	t = (unsigned char*)s;
	i = 0;
	while (i < n)
	{
		if (*t == c1)
			return (t);
		++t;
		++i;
	}
	return (0);
}
