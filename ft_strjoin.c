/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmailla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 16:49:52 by thmailla          #+#    #+#             */
/*   Updated: 2018/11/23 02:21:16 by thmailla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char  *s1, char const *s2)
{
	char	*concat;

	if (s1 && s2)
	{
		concat = ft_strnew(ft_strlen(s1) + ft_strlen(s2));
		if (!concat)
			return (NULL);
		ft_strcat(concat, s1);
		ft_strcat(concat, s2);
		ft_strdel(&s1);
		return (concat);
	}
	return (NULL);
}
