/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmailla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/10 19:57:35 by thmailla          #+#    #+#             */
/*   Updated: 2018/11/10 20:18:11 by thmailla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	char	*ps1;
	char	*ps2;
	int		len;

	ps1 = (char *)s1;
	ps2 = (char *)s2;
	len = ft_strlen(ps2);
	i = 0;
	if (*s2 == '\0')
		return ((char *)s1);
	while (ps1[i] && (i + len) <= n)
	{
		if (ft_memcmp(s1 + i, s2, len) == 0)
			return (ps1 + i);
		i++;
	}
	return (NULL);
}
