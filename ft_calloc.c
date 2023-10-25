/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsyvasal <bsyvasal@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 11:42:55 by bsyvasal          #+#    #+#             */
/*   Updated: 2023/10/25 14:37:54 by bsyvasal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*ptr;
	int		i;

	ptr = malloc(count * size);
	if (!ptr)
		return (0);
	i = 0;
	while (i <= size * count)
		ptr[i++] = 0;
	return (ptr);
}
