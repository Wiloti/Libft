/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmailla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 14:16:20 by thmailla          #+#    #+#             */
/*   Updated: 2018/11/10 20:48:06 by thmailla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char		pc;
	unsigned char		*pdest;
	unsigned char		*psrc;

	pdest = (unsigned char *)dest;
	psrc = (unsigned char *)src;
	pc = (unsigned char)c;
	while (n--)
	{
		*pdest++ = *psrc;
		if (*psrc++ == pc)
		{
			dest = (void *)pdest;
			return (dest);
		}
	}
	return (NULL);
}
