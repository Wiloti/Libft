/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmailla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 14:28:42 by thmailla          #+#    #+#             */
/*   Updated: 2018/11/10 20:55:03 by thmailla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*pdest;
	const unsigned char *psrc;
	size_t				i;

	pdest = (unsigned char *)dest;
	psrc = (const unsigned char *)src;
	i = 0;
	if (pdest < psrc)
	{
		while (i < n)
		{
			pdest[i] = psrc[i];
			i++;
		}
	}
	else if (pdest > psrc)
	{
		i = n;
		while (i > 0)
		{
			pdest[i - 1] = psrc[i - 1];
			i--;
		}
	}
	return (dest);
}
