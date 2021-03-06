/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wordcount.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aho <aho@student.42.us.org>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/16 00:48:33 by aho               #+#    #+#             */
/*   Updated: 2017/10/16 02:09:43 by aho              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_wordcount(char const *s, char c)
{
	int		i;
	int		arr_len;

	i = 0;
	arr_len = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && s[i + 1] == c)
			arr_len++;
		if (s[i] != c && s[i + 1] == '\0')
			arr_len++;
		i++;
	}
	return (arr_len);
}
