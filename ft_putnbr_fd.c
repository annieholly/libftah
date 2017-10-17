/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aho <aho@student.42.us.org>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/07 18:29:10 by aho               #+#    #+#             */
/*   Updated: 2017/10/08 23:59:17 by aho              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int num, int fd)
{
	if (num == -2147483648)
	{
		ft_putstr_fd("-2147483648", fd);
		return ;
	}
	if (num > 2147483647 || num < -2147483648)
		num = 0;
	if (num < 0)
	{
		ft_putchar_fd('-', fd);
		num = num * -1;
	}
	if (num >= 10)
	{
		ft_putnbr_fd(num / 10, fd);
		num = num % 10;
		ft_putchar_fd(num + 48, fd);
	}
	else
		ft_putchar_fd(num + 48, fd);
}
