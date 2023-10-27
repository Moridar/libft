/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsyvasal <bsyvasal@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 17:04:50 by bsyvasal          #+#    #+#             */
/*   Updated: 2023/10/27 15:40:03 by bsyvasal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int	start;
	int	i;

	if (!s1 || !set)
		return (0);
	if (!*s1)
		return ((char *) s1);
	i = 0;
	while (s1[i])
	{
		if (ft_strchr(set, s1[i]) == NULL)
			break ;
		i++;
	}
	start = i;
	if (!s1[start])
		return (ft_strdup(""));
	i = ft_strlen(s1) - 1;
	while (s1[i])
	{
		if (ft_strchr(set, s1[i]) == NULL)
			break ;
		i--;
	}
	return (ft_substr(s1, start, i + 1 - start));
}
