/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aho <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/20 21:33:07 by aho               #+#    #+#             */
/*   Updated: 2017/09/28 02:43:10 by aho              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strstr(const char *big, const char *little)
{
	int i;
	int j;
	char *ptr;

	i = 0;
	j = 0; 
	if (little[j] == '\0') 
		return ((char*)&big[i]);
	while (big[i] != '\0' )
	{
		if (big[i] == little[j])
		{
			ptr = (char*)&big[i];
			while (big[i+j] == little[j]) 
			{
				j++;
				if (little[j] == '\0') 
					return (ptr);
			}
		}
		j = 0;
		i++;
	}
	return (0);
}
