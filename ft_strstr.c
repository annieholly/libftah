/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aho <aho@student.42.us.org>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/15 00:40:14 by aho               #+#    #+#             */
/*   Updated: 2017/10/15 00:41:18 by aho              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *big, const char *little)
{
	int		i;
	int		j;
	char	*ptr;

	i = 0;
	j = 0;
	if (little[j] == '\0')
		return ((char*)&big[i]);
	while (big[i] != '\0')
	{
		if (big[i] == little[j])
		{
			ptr = (char*)&big[i];
			while (big[i + j] == little[j])
			{
				j++;
				if (little[j] == '\0')
					return (ptr);
			}
		}
		j = 0;
		i++;
	}
	return (0);
}
