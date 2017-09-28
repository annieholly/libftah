/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aho <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/27 14:52:55 by aho               #+#    #+#             */
/*   Updated: 2017/09/27 15:31:37 by aho              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlen(const char *s);

char *ft_strncat(char *restrict s1, const char *s2, size_t n)
{
	size_t i; 
	size_t j;

	i = ft_strlen(s1);
	j = 0; 

	while((j < n) && s2[j] != '\0')
	{
		s1[i] = s2[j];
		i++;
		j++;
	}
	s1[i] = '\0'; 
	return (s1);
}
