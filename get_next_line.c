/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmailla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/16 02:32:21 by thmailla          #+#    #+#             */
/*   Updated: 2018/11/23 14:20:29 by thmailla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdjoin(char const *s1, char const *s2)
{
	char	*concat;

	if (s1 && s2)
	{
		concat = ft_strnew(ft_strlen(s1) + ft_strlen(s2));
		if (!concat)
			return (NULL);
		ft_strcpy(concat, s1);
		ft_strcat(concat, s2);
		ft_strdel((char **)&s1);
		return (concat);
	}
	return (NULL);
}

char	*ft_alloc(char *str, char **line)
{
	char	*tmp;

	tmp = NULL;
	if ((tmp = ft_strchr(str, '\n')))
	{
		*tmp = 0;
		if (!(tmp = ft_strdup(tmp + 1)))
			return (NULL);
		if (!(*line = ft_strdup(str)))
			return (NULL);
		ft_strdel(&str);
		str = tmp;
	}
	else
	{
		if (!(*line = ft_strdup(str)))
			return (NULL);
		ft_strclr(str);
	}
	return (str);
}

int		get_next_line(const int fd, char **line)
{
	static	char	*str;
	char			buf[BUFF_SIZE + 1];
	int				value;

	if ((fd < 0 || !line || read(fd, 0, 0) < 0) ||
			(!str && !(str = (char*)malloc(0))))
		return (-1);
	while ((value = read(fd, buf, BUFF_SIZE)))
	{
		if (value < 0)
			return (value);
		buf[value] = '\0';
		if (!(str = ft_strdjoin(str, buf)))
			return (-1);
		if (ft_strchr(buf, '\n'))
			break ;
	}
	if (value <= 0 && !(*str))
		return (value);
	if (!(str = ft_alloc(str, line)))
	{
		ft_strdel(&str);
		return (value);
	}
	return (1);
}
