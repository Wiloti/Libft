/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmailla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 15:55:52 by thmailla          #+#    #+#             */
/*   Updated: 2018/11/14 17:56:19 by thmailla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*ps;
	size_t	n;

	if (!s || !f)
		return (NULL);
	ps = ft_strdup((const char *)s);
	n = 0;
	if (!ps)
		return (NULL);
	while (ps[n])
	{
		ps[n] = f(n, ps[n]);
		n++;
	}
	return (ps);
}
