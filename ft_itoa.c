/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsyvasal <bsyvasal@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 12:28:02 by bsyvasal          #+#    #+#             */
/*   Updated: 2023/10/27 14:43:27 by bsyvasal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_itoa(int n)
{
	int		neg;
	char	*str;
	int		i;

	neg = 0;
	i = 1;
	if (n < 0)
	{
		if (n == -2147483648)
			return (ft_strdup("-2147483648"));
		return (ft_strjoin("-", ft_itoa(n * -1)));
	}
	while (ft_power(10, i++) <= n)
		if (i == 11)
			break ;
	str = malloc(i--);
	if (!str)
		return (0);
	str[i--] = 0;
	while (i >= 0)
	{
		str[i--] = n % 10 + 48;
		n /= 10;
	}
	return (str);
}

/*int	main(void)
{
	int i = 2147483647;
	printf("ft_itoa(%d) = %s\n", i, ft_itoa(i));
}*/