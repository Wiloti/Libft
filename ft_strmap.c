/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmailla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/10 21:43:12 by thmailla          #+#    #+#             */
/*   Updated: 2018/11/14 17:52:21 by thmailla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*ps;
	size_t	n;

	if (!s || !f)
		return (NULL);
	ps = ft_strdup((const char *)s);
	n = 0;
	if (ps == NULL)
		return (NULL);
	while (ps[n])
	{
		ps[n] = f(ps[n]);
		n++;
	}
	return (ps);
}
