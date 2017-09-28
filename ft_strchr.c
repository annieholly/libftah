/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aho <aho@student.42.us.org>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/27 22:45:45 by aho               #+#    #+#             */
/*   Updated: 2017/09/27 22:45:50 by aho              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlen(const char *s);

char *ft_strchr(const char *s, int c)
{
	size_t i; 

	i = 0; 
	while (s[i] != c)
	{
		if ((i == ft_strlen(s)) || (s[i] == '\0'))
			return NULL;
		i++; 
	}
	return ((char*) &s[i]);
}
