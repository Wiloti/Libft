/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmailla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 12:26:12 by thmailla          #+#    #+#             */
/*   Updated: 2018/11/09 13:36:11 by thmailla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char octet;
	unsigned char *array;

	octet = (unsigned char)c;
	array = (unsigned char *)s;
	while (n != 0)
	{
		n--;
		array[n] = octet;
	}
	return (s);
}
