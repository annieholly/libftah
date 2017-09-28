/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aho <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/20 16:13:25 by aho               #+#    #+#             */
/*   Updated: 2017/09/25 16:26:15 by aho              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

char *ft_strncpy(char *dst, const char *src, size_t len) 
{
	size_t i; 
	char *ptr;

	i = 0; 
	ptr = dst;

	while ((src[i] != '\0') && (i < len))
	{
//		printf("while(src) loop: %zu \n", i); 
		dst[i] = src[i]; 
		i++; 
	}

	while (i < len)
	{
		dst[i] = '\0'; 
		i++;
	}
	dst = ptr;
	return (dst);
}
