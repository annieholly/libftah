/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checkintlimits.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aho <aho@student.42.us.org>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/16 22:50:29 by aho               #+#    #+#             */
/*   Updated: 2017/10/17 01:09:06 by aho              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		check_int(long int num)
{
	if (num < -2147483648)
		return (0);
	else if (num > 2147483647)
		return (-1);
	else
		return (1);
}
