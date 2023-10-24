/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsyvasal <bsyvasal@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 13:50:05 by bsyvasal          #+#    #+#             */
/*   Updated: 2023/10/24 15:58:48 by bsyvasal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

size_t	ft_strlen(const char *s)
{
	int		i;

	i = 0;
	while (*(s++))
		i++;
	return (i);
}
/*
int	main(void)
{
	char	*str = "hejhej";

	printf("length of \"%s\": %zu\n", str, ft_strlen(str));
}*/