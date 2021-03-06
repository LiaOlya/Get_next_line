/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oltkache <oltkache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/30 20:04:28 by oltkache          #+#    #+#             */
/*   Updated: 2017/12/10 17:45:17 by oltkache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strncpy(char *dst, const char *scr, size_t len)
{
	size_t i;

	i = -1;
	while (++i < len && scr[i] != '\0')
		dst[i] = scr[i];
	if (ft_strlen(scr) < len)
		while (i < len)
		{
			dst[i] = '\0';
			++i;
		}
	return (dst);
}
