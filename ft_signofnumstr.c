/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_signofnumstr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aho <aho@student.42.us.org>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/18 21:35:54 by aho               #+#    #+#             */
/*   Updated: 2017/10/18 21:37:08 by aho              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_signofnumstr(const char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		while (ft_isspace(str[i]) == 1 || str[i] == '0')
			i++;
		if (str[i] == '-' && ft_isdigit(str[i + 1]) == 1)
			return (-1);
		if ((str[i] == '-' || str[i] == '+') && ft_isdigit(str[i + 1]) == 0)
			return (0);
		if (ft_isdigit(str[i]) == 1)
			return (1);
		if (str[i] == '-' || str[i] == '+')
		{
			if (ft_isdigit(str[i + 1]) == 0)
				return (0);
			if (str[i] == '-' && ft_isdigit(str[i - 1]) == 0)
				return (-1);
			i++;
		}
		i++;
	}
	return (1);
}
