/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsyvasal <bsyvasal@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 10:54:47 by bsyvasal          #+#    #+#             */
/*   Updated: 2023/10/26 12:26:52 by bsyvasal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	wordsinstr(char const *s, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i++] == c)
			;
		while (s[i++] != c)
			;
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
		while (s[i] != c)
			i++;
		if (i)
			strarr[j++] = ft_substr(s, 0, i);
		while (s[i] == c)
			i++;
		s += i;
		i = 0;
	}
	strarr[j] = 0;
	return (strarr);
}
/*
#include <stdio.h>
int main(void)
{
	char *str = "  this   is long   !  ";
	char **res = ft_split(str, ' ');
	int i = 0;

	// just to see the null at the end
	while (res[i - 1])
	{
		printf("num of words %d", i);
		printf("%s\n\n", res[i]);
		i++;
	}
}
*/