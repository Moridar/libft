/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsyvasal <bsyvasal@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 10:54:47 by bsyvasal          #+#    #+#             */
/*   Updated: 2023/10/30 14:49:29 by bsyvasal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	wordsinstr(char const *s, char c)
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
			strarr[j++] = ft_substr(s, 0, i);
		while (s[i] == c && s[i])
			i++;
		s += i;
		i = 0;
	}
	strarr[j] = 0;
	return (strarr);
}
