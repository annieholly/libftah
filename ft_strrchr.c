/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aho <aho@student.42.us.org>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/27 22:29:09 by aho               #+#    #+#             */
/*   Updated: 2017/09/27 22:42:15 by aho              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlen(const char *s);

char *ft_strrchr(const char *s, int c)
{
	size_t i; 

	i = ft_strlen(s); 
	while (s[i] != c)
	{
		if ((i == 0) || ((s[i] == '0') && (s[i + 1] == '\\')))
			return NULL;
		i--; 
	}
	return ((char*) &s[i]);
}
