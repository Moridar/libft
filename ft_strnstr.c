/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsyvasal <bsyvasal@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 11:00:24 by bsyvasal          #+#    #+#             */
/*   Updated: 2023/10/25 14:21:21 by bsyvasal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int	i;

	if (!haystack && !len)
		return ((char *) haystack);
	while (*haystack)
	{
		i = 0;
		while (haystack[i] && haystack[i] == needle[i] && i < len)
			i++;
		if (!needle[i])
			return ((char *) haystack);
		haystack++;
		len--;
	}
	return (NULL);
}
