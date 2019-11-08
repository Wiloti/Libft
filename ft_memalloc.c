/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmailla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/10 20:23:50 by thmailla          #+#    #+#             */
/*   Updated: 2018/11/11 16:45:27 by thmailla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t n)
{
	char	*s;

	if (!(s = (char *)malloc(sizeof(char) * n)))
		return (NULL);
	while (n--)
		s[n] = 0;
	return (s);
}
