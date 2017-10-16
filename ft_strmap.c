/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aho <aho@student.42.us.org>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/06 18:16:49 by aho               #+#    #+#             */
/*   Updated: 2017/10/15 01:02:21 by aho              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*str;
	char	*newstr;
	int		i;
	int		length;

	if (!s)
		return (0);
	str = (char*)s;
	i = 0;
	length = ft_strlen(str);
	newstr = ft_memalloc(length + 1);
	if (!s || !f)
		return (0);
	if (newstr == 0)
		return (0);
	while (length > 0)
	{
		newstr[i] = f(str[i]);
		length--;
		i++;
	}
	newstr[i] = '\0';
	return (newstr);
}
