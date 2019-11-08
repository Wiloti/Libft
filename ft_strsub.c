/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmailla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 16:16:56 by thmailla          #+#    #+#             */
/*   Updated: 2018/11/11 16:44:11 by thmailla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*new;
	int		i;

	new = ft_strnew(len);
	i = 0;
	if (!s)
		return (NULL);
	if (!new)
		return (NULL);
	new[len] = '\0';
	while (len--)
	{
		new[i] = s[start];
		i++;
		start++;
	}
	return (new);
}
