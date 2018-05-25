/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oltkache <oltkache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/30 20:23:18 by oltkache          #+#    #+#             */
/*   Updated: 2017/12/10 17:45:01 by oltkache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*res;
	int		len;
	int		i;

	if (!s)
		return (NULL);
	len = ft_strlen(s);
	res = (char*)malloc(sizeof(char) * (len + 1));
	if (!res)
		return (0);
	i = 0;
	while (s[i] != '\0')
	{
		res[i] = f(s[i]);
		++i;
	}
	res[i] = '\0';
	return (res);
}
