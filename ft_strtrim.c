/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aho <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/04 17:28:03 by aho               #+#    #+#             */
/*   Updated: 2017/10/15 20:11:59 by aho              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		i;
	int		t;
	int		length;
	char	*trim;

	i = 0;
	t = 0;
	if (!s)
		return (0);
	length = ft_strlen(s);
	if (!s)
		return (0);
	while (ft_isspace(s[i]) == 1)
		i++;
	if (s[i] == '\0')
		return ("");
	while (ft_isspace(s[length - 1]) == 1)
		length--;
	trim = ft_memalloc(length - i + 1);
	if (trim == 0)
		return (0);
	while (i < length)
		trim[t++] = s[i++];
	trim[t] = '\0';
	return (trim);
}
