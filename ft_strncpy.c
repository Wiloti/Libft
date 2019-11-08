/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmailla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 18:44:03 by thmailla          #+#    #+#             */
/*   Updated: 2018/11/09 18:51:53 by thmailla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	char *pdest;

	pdest = dest;
	while (*src && n > 0)
	{
		*pdest++ = *src++;
		n--;
	}
	while (n > 0)
	{
		*pdest++ = '\0';
		n--;
	}
	return (dest);
}
