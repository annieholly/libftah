/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aho <aho@student.42.us.org>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/18 21:35:39 by aho               #+#    #+#             */
/*   Updated: 2017/10/18 21:35:42 by aho              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int			i;
	int			sign;
	long int	num;

	i = 0;
	sign = ft_signofnumstr(str);
	num = 0;
	while (str[i] != '\0')
	{
		while (ft_isspace(str[i]) == 1 || str[i] == '-' || str[i] == '+')
			i++;
		if (ft_isdigit(str[i]) == 0)
			return (0);
		while (ft_isdigit(str[i]) == 1)
		{
			num = (num * 10) + (str[i] - '0');
			i++;
			if (ft_isdigit(str[i]) == 0 || str[i] == '\0')
				return (sign * num);
		}
		i++;
	}
	return (sign * num);
}
