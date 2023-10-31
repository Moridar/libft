/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsyvasal <bsyvasal@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 10:54:47 by bsyvasal          #+#    #+#             */
/*   Updated: 2023/10/31 10:28:21 by bsyvasal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	wordsinstr(char const *s, char c)
{
	int	i;
	int	j;
	int	old_i;

	i = 0;
	j = 0;
	old_i = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		old_i = i;
		while (s[i] != c && s[i])
			i++;
		if (i != old_i)
			j++;
	}
	return (j);
}

static int	strarradd(char **strarr, char const *s, int j, int i)
{
	char	*str;

	str = ft_substr(s, 0, i);
	if (!str)
	{
		while (--j >= 0)
		{
			free(strarr[j]);
		}
		free(strarr);
		return (0);
	}
	strarr[j] = str;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**strarr;
	int		i;
	int		j;

	if (!s)
		return (0);
	strarr = malloc((wordsinstr(s, c) + 1) * sizeof (char *));
	if (!strarr)
		return (0);
	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] && s[i] != c)
			i++;
		if (i)
			if (!strarradd(strarr, s, j++, i))
				return (0);
		while (s[i] == c && s[i])
			i++;
		s += i;
		i = 0;
	}
	strarr[j] = 0;
	return (strarr);
}
