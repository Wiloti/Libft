/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmailla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 17:04:23 by thmailla          #+#    #+#             */
/*   Updated: 2018/11/14 17:53:07 by thmailla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	unsigned int	start;
	int				end;

	if (!s)
		return (NULL);
	start = 0;
	end = (int)ft_strlen(s) - 1;
	while ((s[start] == ' ' || s[start] == '\t' || s[start] == '\n')
			&& s[start])
		start++;
	while ((s[end] == ' ' || s[end] == '\t' || s[end] == '\n')
			&& s[end] && end > (int)start)
		end--;
	return (ft_strsub(s, start, (end - start + 1)));
}
