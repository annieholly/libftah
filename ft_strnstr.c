/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aho <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/28 02:48:30 by aho               #+#    #+#             */
/*   Updated: 2017/09/28 04:24:12 by aho              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

char *ft_strnstr(const char *big, const char *little, size_t len) 
{
	size_t i;
	size_t j;
	size_t tmp;
	
	i = 0; 
	j = 0;
	if (little[0] == '\0')
		return ((char*)&big[i]);
	while (big[i] != '\0') 
	{
		if (big[i] == little[j]) 
		{
			tmp = i;
			while((big[tmp] == little[j]) && (0 < len))
			{
				tmp++;
				j++; 
				len--;
				if (little[j] == '\0') 
					return (char*)&big[i]; 
			}
		}
		if (little[j] == '\0') 
			return (0); 
		j = 0; 
		i++;
	}
	return (0);
}
