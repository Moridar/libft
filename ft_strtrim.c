/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsyvasal <bsyvasal@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 17:04:50 by bsyvasal          #+#    #+#             */
/*   Updated: 2023/10/25 18:53:05 by bsyvasal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int	start;
	int	len;
	int	i;

	if (!s1 || !set)
		return (0);
	start = 0;
	i = 0;
	while (s1[i])
	{
		if (ft_strchr(set, s1[i]) == NULL)
			break ;
		i++;
	}
	start = i;
	len = ft_strlen(s1 + start);
	i = ft_strlen(s1) - 1;
	while (s1[i])
	{
		if (ft_strchr(set, s1[i]) == NULL)
			break ;
		len--;
		i--;
	}
	return (ft_substr(s1, start, len));
}
