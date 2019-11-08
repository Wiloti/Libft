/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmailla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 17:49:42 by thmailla          #+#    #+#             */
/*   Updated: 2018/11/14 17:53:33 by thmailla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int		ft_cnt_w(const char *s, char c)
{
	int	count;
	int	j;

	count = 0;
	j = 0;
	while (*s)
	{
		if (j == 1 && *s == c)
			j = 0;
		if (j == 0 && *s != c)
		{
			j = 1;
			count++;
		}
		s++;
	}
	return (count);
}

static	int		ft_len(const char *s, char c)
{
	int	len;

	len = 0;
	while (*s && *s != c)
	{
		len++;
		s++;
	}
	return (len);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**tab;
	int		nb_word;
	int		i;

	if (!s || !c)
		return (NULL);
	i = 0;
	nb_word = ft_cnt_w((const char *)s, c);
	if (!(tab = (char **)malloc(sizeof(*tab) *
					ft_cnt_w((const char *)s, c) + 1)))
		return (NULL);
	while (nb_word--)
	{
		while (*s && *s == c)
			s++;
		tab[i] = ft_strsub((const char *)s, 0, ft_len((const char *)s, c));
		if (tab[i] == NULL)
			return (NULL);
		s = s + ft_len(s, c);
		i++;
	}
	tab[i] = NULL;
	return (tab);
}
