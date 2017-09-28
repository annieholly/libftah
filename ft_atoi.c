/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aho <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/21 14:52:44 by aho               #+#    #+#             */
/*   Updated: 2017/09/28 06:20:30 by aho              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str) 
{
	int i; 
	int num;
	int sign; 

	i = 0; 
	num = 0; 
	sign = 1; 
	//parse string - if + or - assign positive or negative
	if (!str)
		return ; 
	while (str[i] != '\0') 
	{
//			printf("\n\n begin loop - num: %i, str[%i]: %c \n", num, i, str[i]); 

		if (str[i] == '-' || str[i] == '+')
		{
			if (str[i + 1] == '-' || str[i + 1] == '+')
				return (0);
			if (str[i] == '-') 
				sign = -1;
			i++;
		}


		while (str[i] >= '0' && str[i] <= '9' && str[i] != '\0') 
		{
			printf("num: %i, str[%i]: %c \n", num, i, str[i]); 
			num = (num * 10) + (str[i] - '0');
			i++;
		}
			printf("outside while - num: %i, str[%i]: %c \n", num, i, str[i]); 

		i++;
	}

	return (sign * num); 
}
