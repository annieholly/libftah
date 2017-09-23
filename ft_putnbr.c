/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aho <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/18 15:58:57 by aho               #+#    #+#             */
/*   Updated: 2017/09/18 16:33:17 by aho              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> 

void ft_putchar(char c)
{
	write (1, &c, 1); 
}

void ft_putnbr(int num) 
{
	if (num < 0)
	{
		
	}

	if (num % 10 != 0) 
	{

	}

	ft_putchar(n + 48);
}

int main()
{
	ft_putnbr(4);
	ft_putchar('\n');
	ft_putnbr(-1);
	ft_putchar('\n');
	ft_putnbr(0);
	ft_putchar('\n');
	ft_putnbr(100);
	ft_putchar('\n');

}
