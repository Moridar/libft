/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsyvasal <bsyvasal@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 09:43:55 by bsyvasal          #+#    #+#             */
/*   Updated: 2023/10/27 10:58:56 by bsyvasal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n >= 1)
	{
		if (n >= 10)
			ft_putnbr_fd(n / 10, fd);
		n = n % 10 + '0';
		write(fd, &n, 1);
		return ;
	}
	if (n < 0)
	{
		write(fd, "-", 1);
		if (n == -2147483648)
		{
			write(fd, "2", 1);
			n = -147483648;
		}
		ft_putnbr_fd(n * -1, fd);
		return ;
	}
	if (n == 0)
		write(fd, "0", 1);
}
/*
int main(void)
{
	write(1, "hello\n", 6);
	ft_putnbr_fd(2147483647, 1);
	write(1, "\n", 1);
}*/