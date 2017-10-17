/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aho <aho@student.42.us.org>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/15 00:42:18 by aho               #+#    #+#             */
/*   Updated: 2017/10/15 19:47:14 by aho              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	tmp;

	i = 0;
	j = 0;
	if (little[0] == '\0')
		return ((char*)&big[i]);
	while (big[i] != '\0' && i < len)
	{
		if (big[i] == little[j])
		{
			tmp = i;
			while ((big[tmp] == little[j]) && (tmp < len))
			{
				tmp++;
				j++;
				if (little[j] == '\0')
					return ((char*)&big[i]);
			}
			j = 0;
		}
		i++;
	}
	return (0);
}
