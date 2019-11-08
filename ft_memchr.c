/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmailla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 14:40:48 by thmailla          #+#    #+#             */
/*   Updated: 2018/11/10 20:46:58 by thmailla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char		*pstr;

	pstr = (unsigned char *)s;
	while (n--)
	{
		if (*pstr == (unsigned char)c)
			return (pstr);
		pstr++;
	}
	return (NULL);
}
