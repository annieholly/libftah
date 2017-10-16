/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_signofnumstr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aho <aho@student.42.us.org>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/14 23:28:30 by aho               #+#    #+#             */
/*   Updated: 2017/10/15 02:05:50 by aho              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_signofnumstr(char *str)
{
	int i;
	i = 0;
	while (str[i] != '\0')
    {
        if (str[i] == '-' || str[i] == '+')
        {
            if (ft_isdigit(str[i + 1]) == 0)
                return (0);
            if (str[i] == '-' && ft_isdigit(str[i - 1]) == 0)
                return (-1);
            i++;
		}
        i++;
    }
    return (1);
}
