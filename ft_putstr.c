/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aho <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/18 16:03:24 by aho               #+#    #+#             */
/*   Updated: 2017/09/18 16:21:29 by aho              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> 

void ft_putchar(char c)
{
	write(1, &c, 1); 
}

void ft_putstr(char *str)
{
	int i; 
	i = 0;
	while (str[i] != '\0') 
	{
		ft_putchar(str[i]);
		i++;
	}
}

int main (void) 
{
	ft_putstr("hello");
	ft_putchar('\n');
	ft_putchar('a');
	ft_putchar('\n');
	ft_putchar('b');


}
