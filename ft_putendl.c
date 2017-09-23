/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aho <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/18 17:20:30 by aho               #+#    #+#             */
/*   Updated: 2017/09/18 17:49:39 by aho              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void ft_putchar(char c) 
{
	write (1, &c, 1); 
}

void ft_putendl(char const *s) 
{
	int i; 
	i = 0; 
	while (s[i]  != '\0') 
	{
		ft_putchar(s[i]); 
		i++; 
	}
	ft_putchar('\n');
}

int main (void) 
{
	ft_putendl("hello friends"); 
}
