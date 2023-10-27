/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsyvasal <bsyvasal@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 10:18:44 by bsyvasal          #+#    #+#             */
/*   Updated: 2023/10/27 17:22:38 by bsyvasal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*ptr;
	int		i;

	i = -1;
	ptr = NULL;
	while (s[++i])
		if (s[i] == (char) c)
			ptr = (char *) &s[i];
	if ((char) c == 0)
		ptr = (char *) &s[i];
	return (ptr);
}
