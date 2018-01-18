/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gnl_grimly.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passef <passef@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/18 11:59:17 by passef            #+#    #+#             */
/*   Updated: 2018/01/18 13:56:08 by passef           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "grimly.h"

static int		ft_read(t_env *e, char **str, int fd)
{
	int		ret;
	char	*s;
	char	buf[e->buff_gnl + 1];

	if ((ret = read(fd, buf, e->buff_gnl)) == -1)
		return (-1);
	buf[ret] = '\0';
	s = *str;
	*str = ft_strjoin(*str, buf);
	if (*s != 0)
		free(s);
	return (ret);
}

static int		ft_get_line(char **str, char **line, char *s)
{
	int		i;
	char	*join;

	i = 0;
	if (*s == '\n')
		i = 1;
	*s = 0;
	*line = ft_strjoin("", *str);
	if (i == 0 && ft_strlen(*str) != 0)
	{
		*str = ft_strnew(1);
		return (1);
	}
	else if (i == 0 && !(ft_strlen(*str)))
		return (0);
	join = *str;
	*str = ft_strjoin(s + 1, "");
	free(join);
	return (i);
}

int				gnl_grimly(t_env *e, int const fd, char **line)
{
	int			ret;
	char		*s;
	static char	*str;

	if (str == 0)
		str = "";
	if (!line || e->buff_gnl < 1)
		return (-1);
	ret = e->buff_gnl;
	while (line)
	{
		s = str;
		while (*s || ret < e->buff_gnl)
		{
			if (*s == '\n' || *s == 0 || *s == -1)
				return (ft_get_line(&str, line, s));
			s++;
		}
		ret = ft_read(e, &str, fd);
		if (ret == -1)
			return (-1);
	}
	return (0);
}
