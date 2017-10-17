/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aho <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/21 14:52:44 by aho               #+#    #+#             */
/*   Updated: 2017/10/16 23:22:02 by aho              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int			i;
	long int	num;
	int			sign;
	char		*s;

	i = 0;
	num = 0;
	s = (char*)str;
	sign = ft_signofnumstr(s);
	while (str[i] != '\0')
	{
		while (ft_isspace(str[i]) == 1 || str[i] == '-' || str[i] == '+')
			i++;
		if (ft_isdigit(str[i]) == 0)
			return (sign * num);
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
