/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aho <aho@student.42.us.org>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/14 19:36:33 by aho               #+#    #+#             */
/*   Updated: 2017/10/16 01:37:29 by aho              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char		*d;
	unsigned const char	*s;
	unsigned char		ch;

	d = dst;
	s = src;
	ch = (unsigned char)c;
	if (n == 0)
		return (NULL);
	while (n > 0)
	{
		if (*s == ch)
		{
			*d = *s;
			d++;
			return (d);
		}
		*d = *s;
		d++;
		s++;
		n--;
	}
	return (NULL);
}
