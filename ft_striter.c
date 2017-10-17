/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aho <aho@student.42.us.org>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/05 23:29:51 by aho               #+#    #+#             */
/*   Updated: 2017/10/16 15:41:35 by aho              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striter(char *s, void (*f)(char *))
{
	char	*str;
	size_t	len;
	int		i;

	if (!s || !f)
		return ;
	str = s;
	len = ft_strlen(str);
	i = 0;
	while (len > 0)
	{
		f(&str[i]);
		len--;
		i++;
	}
}
