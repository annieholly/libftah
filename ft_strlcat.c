/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aho <aho@student.42.us.org>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/05 21:54:35 by aho               #+#    #+#             */
/*   Updated: 2017/10/17 01:08:05 by aho              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	src_i;

	i = 0;
	while ((dst[i] != '\0') && (i < size))
		i++;
	src_i = i;
	while ((src[i - src_i]) && (i + 1 < size))
	{
		dst[i] = src[i - src_i];
		i++;
	}
	if (i < size)
		dst[i] = '\0';
	return (src_i + ft_strlen(src));
}
