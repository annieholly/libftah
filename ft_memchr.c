/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aho <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/03 23:00:31 by aho               #+#    #+#             */
/*   Updated: 2017/10/14 19:49:15 by aho              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*str;
	unsigned char		ch;

	str = s;
	ch = (unsigned char)c;
	while (n > 0)
	{
		if (ch == *str)
			return ((void*)str);
		else
		{
			str++;
			n--;
		}
	}
	return (0);
}
