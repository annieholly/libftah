/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aho <aho@student.42.us.org>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/06 18:09:38 by aho               #+#    #+#             */
/*   Updated: 2017/10/16 15:42:42 by aho              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;
	char			*str;

	i = 0;
	if (!s || !f)
		return ;
	str = s;
	while (str[i] != '\0')
	{
		f(i, &str[i]);
		i++;
	}
}
