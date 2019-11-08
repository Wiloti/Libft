/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmailla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 18:03:33 by thmailla          #+#    #+#             */
/*   Updated: 2018/11/14 18:42:32 by thmailla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	void		ft_length(int c, size_t *len, int *weight)
{
	*len = 1;
	if (c >= 0)
	{
		*len = 0;
		c = -c;
	}
	*weight = 1;
	while (c / *weight < -9)
	{
		*weight *= 10;
		*len += 1;
	}
}

char				*ft_itoa(int c)
{
	size_t	len;
	int		weight;
	size_t	i;
	char	*str;

	ft_length(c, &len, &weight);
	i = 0;
	if (!(str = (char *)malloc(sizeof(char) * (len + 2))))
		return (NULL);
	if (c < 0)
	{
		str[i] = '-';
		i++;
	}
	if (c > 0)
		c = -c;
	while (weight >= 1)
	{
		str[i++] = -(c / weight % 10) + 48;
		weight /= 10;
	}
	str[i] = '\0';
	return (str);
}
