/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aho <aho@student.42.us.org>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/07 17:33:26 by aho               #+#    #+#             */
/*   Updated: 2017/10/16 23:52:16 by aho              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t		i;

	i = 0;
	if (!s1 || !s2)
		return (0);
	if (n == 0)
		return (1);
	if (s1[i] == '\0' && s2[i] == '\0')
		return (1);
	while (s1[i] != '\0' && s1[i] != '\0' && i < n)
	{
		if (i == (n - 1) && s1[n - 1] == s2[n - 1])
			return (1);
		if (s1[i] == s2[i])
			i++;
		else if (s1[i] != s2[i])
			return (0);
		if (s1[i] == '\0' && s2[i] == '\0')
			return (1);
	}
	return (0);
}
