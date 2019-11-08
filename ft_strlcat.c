/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmailla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 17:56:37 by thmailla          #+#    #+#             */
/*   Updated: 2018/11/14 19:53:33 by thmailla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	char		*pdest;
	const char	*psrc;
	size_t		size;
	size_t		len;

	pdest = (char *)dest;
	psrc = (const char *)src;
	size = (size_t)n;
	while (n-- && *pdest)
		pdest++;
	len = pdest - dest;
	n = size - len;
	if (n == 0)
		return (len + ft_strlen(psrc));
	while (*psrc)
	{
		if (n != 1)
		{
			*pdest++ = *psrc;
			n--;
		}
		psrc++;
	}
	*pdest = '\0';
	return (len + (psrc - src));
}
