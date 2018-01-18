/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passef <passef@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/26 01:50:46 by passef            #+#    #+#             */
/*   Updated: 2017/04/27 11:40:25 by passef           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_trmalloc(char const *s)
{
	int	i;
	int	l;

	i = 0;
	while (s[i] && (s[i] == ' ' || s[i] == '\t' || s[i] == '\n'))
		i++;
	l = ft_strlen(s) - 1;
	while (s[l] && (s[l] == ' ' || s[l] == '\t' || s[l] == '\n'))
		l--;
	return (ft_strnew((unsigned int)((l - i) + 1)));
}

static int	ft_checkstr(char const *s)
{
	int	len;
	int i;

	i = 0;
	len = ft_strlen(s);
	while (s[i] && (s[i] == ' ' || s[i] == '\t' || s[i] == '\n'))
		i++;
	if (len == i)
		return (0);
	return (1);
}

char		*ft_strtrim(char const *s)
{
	int		i;
	int		j;
	int		max;
	char	*str;

	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	if (!(ft_checkstr(s)))
	{
		str = ft_strnew(1);
		return (str);
	}
	if (!(str = ft_trmalloc(s)))
		return (NULL);
	while (s[i] && (s[i] == ' ' || s[i] == '\t' || s[i] == '\n'))
		i++;
	max = ft_strlen(s) - 1;
	while (s[max] && (s[max] == ' ' || s[max] == '\t' || s[max] == '\n'))
		max--;
	while (i < max)
		str[j++] = s[i++];
	str[j] = s[i];
	return (str);
}
