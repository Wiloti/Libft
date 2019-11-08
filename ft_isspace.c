/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmailla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/10 18:04:47 by thmailla          #+#    #+#             */
/*   Updated: 2018/11/10 20:45:38 by thmailla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isspace(char c)
{
	if (c == '\t' || c == '\r' || c == '\n' || c == '\v' ||
			c == '\f' || c == ' ')
		return (1);
	return (0);
}
