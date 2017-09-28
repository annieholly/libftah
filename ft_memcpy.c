/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aho <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/28 05:52:53 by aho               #+#    #+#             */
/*   Updated: 2017/09/28 05:58:15 by aho              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

void *ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	char *restrict d; 
	const char *restrict s;

	d = dst; 
	s = src;
	while (n > 0)
	{
		*d = *s; 
		d++; 
		s++;
		n--; 
	}
	return (dst); 
}
