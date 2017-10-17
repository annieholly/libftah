/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_color.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aho <aho@student.42.us.org>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/16 22:25:33 by aho               #+#    #+#             */
/*   Updated: 2017/10/16 22:49:58 by aho              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>

void log_green(char *s)
{
	char *str;
	char *begin;
	char *end; 
	char *final;

	str = s;
	begin = ft_memalloc(11);
	begin = "\033[22;32m";
	end = ft_memalloc(7);
	end = "\033[0m";
//	printf("\033[22;32mHello, world!\033[0m");
	final = ft_strjoin(begin, str); 
	final = ft_strjoin(str, end);
	ft_putstr(final);



}
