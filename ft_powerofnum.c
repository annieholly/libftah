/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_powerofnum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aho <aho@student.42.us.org>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/15 20:46:21 by aho               #+#    #+#             */
/*   Updated: 2018/01/09 22:07:45 by aho              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_powerofnum(int n)
{
	int	power;

	power = 0;
	if (n < 0)
	{
		n = n * -1;
		power++;
	}
	while (n >= 10)
	{
		power++;
		n = n / 10;
	}
	return (power);
}

int		ft_powerofunsignedint(unsigned int n)
{
	int	power;

	power = 0;
	while (n >= 10)
	{
		power++;
		n = n / 10;
	}
	return (power);
}
