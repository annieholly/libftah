/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aho <aho@student.42.us.org>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/07 17:24:22 by aho               #+#    #+#             */
/*   Updated: 2017/10/15 01:04:03 by aho              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;
	char			*newstr;

	str = (char*)s;
	if (!s)
		return (0);
	newstr = ft_memalloc(ft_strlen(str) + 1);
	if (newstr == 0)
		return (0);
	i = 0;
	while (str[i] != '\0')
	{
		newstr[i] = f(i, str[i]);
		i++;
	}
	return (newstr);
}
