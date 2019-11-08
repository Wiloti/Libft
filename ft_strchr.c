/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmailla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 20:40:55 by thmailla          #+#    #+#             */
/*   Updated: 2018/11/10 20:51:21 by thmailla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned int	i;
	char			pc;
	char			*pstr;

	i = 0;
	pc = (char)c;
	pstr = (char *)s;
	while (s[i])
	{
		if (s[i] == pc)
			return (pstr + i);
		i++;
	}
	if (s[i] == pc)
		return (pstr + i);
	return (NULL);
}
