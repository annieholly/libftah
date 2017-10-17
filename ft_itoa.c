/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aho <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/06 16:25:12 by aho               #+#    #+#             */
/*   Updated: 2017/10/15 21:05:00 by aho              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char		*numstr;
	int			power;
	int			sign;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	sign = 1;
	if (n < 0)
		sign = -1;
	power = ft_powerofnum(n);
	n = n * sign;
	numstr = ft_memalloc(power + 2);
	if (numstr == 0)
		return (0);
	numstr[power + 1] = '\0';
	while (power > 0)
	{
		numstr[power] = (char)((n % 10) + 48);
		n = n / 10;
		power--;
	}
	numstr[power] = (char)(n) + 48;
	if (sign == -1)
		numstr[power] = '-';
	return (numstr);
}
