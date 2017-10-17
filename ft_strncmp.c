/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aho <aho@student.42.us.org>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/26 09:44:21 by aho               #+#    #+#             */
/*   Updated: 2017/10/15 22:51:05 by aho              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t num)
{
	size_t			i;
	unsigned char	*u1;
	unsigned char	*u2;

	i = 0;
	u1 = (unsigned char*)s1;
	u2 = (unsigned char*)s2;
	if (num == 0)
		return (0);
	while (i < (num - 1) && s1[i] != '\0' && s2[i] != '\0')
	{
		if (u1[i] != u2[i])
			return (u1[i] - u2[i]);
		else
			i++;
	}
	return (u1[i] - u2[i]);
}
