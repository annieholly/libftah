/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aho <aho@student.42.us.org>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/26 12:00:47 by aho               #+#    #+#             */
/*   Updated: 2017/09/27 15:18:24 by aho              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlen(const char *s);

char *ft_strcat(char *restrict s1, const char *restrict s2)
{
	int i;
	int j;

	i = ft_strlen(s1); 
	j = 0;
	while (s2[j] != '\0') 
	{
		s1[i] = s2[j]; 
		i++;
		j++; 
	}
	s1[i] = '\0'; 
	return (s1);
}
