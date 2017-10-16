/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aho <aho@student.42.us.org>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/05 21:54:35 by aho               #+#    #+#             */
/*   Updated: 2017/10/15 00:36:53 by aho              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	char	*s;
	size_t	length;
	size_t	i;
	size_t	max;
	size_t	d_len;

	s = (char*)src;
	d_len = ft_strlen(dst);
	length = ft_strlen(dst) + ft_strlen(src);
	i = 0;
	max = size - ft_strlen(dst) - 1;
	if (size <= ft_strlen(dst) + 1)
		return (ft_strlen(s) + size);
	if (size > ft_strlen(dst) + 1)
	{
		while (max > 0)
		{
			dst[d_len + i] = s[i];
			i++;
			max--;
		}
		dst[d_len + i] = '\0';
		return (length);
	}
	return (0);
}
