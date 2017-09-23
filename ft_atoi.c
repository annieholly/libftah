/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aho <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/21 14:52:44 by aho               #+#    #+#             */
/*   Updated: 2017/09/21 15:56:13 by aho              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> 
#include <string.h> 
#include <stdlib.h>

int	ft_atoi(char *str) 
{
	int i; 
	int num;

	i = 0; 
	num = 0; 

	while (str[i] != '\0') 
	{
		while (str[i+1] >= 48 && str[i+1] <= 57) 
		{
			num = (num * 10) + str[i];

		}
		i++;
	}

	return num; 
}

int main(void)
{
	printf("ft_atoi('5') %d \n", ft_atoi("5"));
	printf("STANDARD LIBRARY atoi('5') %d \n\n", atoi("5"));

	printf("ft_atoi('abc') %d \n", ft_atoi("abc"));
	printf("STANDARD LIBRARY atoi('abc') %d \n\n", atoi("abc"));

 	printf("ft_atoi('0') %d \n", ft_atoi("0"));
	printf("STANDARD LIBRARY atoi('0') %d \n\n", atoi("0"));

 	printf("ft_atoi('0') %d \n", ft_atoi("123"));
	printf("STANDARD LIBRARY atoi('0') %d \n\n", atoi("123"));

 	printf("ft_atoi('0') %d \n", ft_atoi("abc123"));
	printf("STANDARD LIBRARY atoi('0') %d \n\n", atoi("abc123"));


}
