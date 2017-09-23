/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aho <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/18 16:33:39 by aho               #+#    #+#             */
/*   Updated: 2017/09/18 17:22:10 by aho              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h> 

int ft_strlen(char *str)
{
	int counter; 
	counter = 0; 
	while (str[counter] != '\0')
		counter++;
	return counter;
}

int main(void)
{
	int stringlength; 
	stringlength = ft_strlen("hello friend"); 
	printf("string length: %d \n", stringlength);
}
