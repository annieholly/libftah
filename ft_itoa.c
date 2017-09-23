/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aho <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/22 10:52:30 by aho               #+#    #+#             */
/*   Updated: 2017/09/22 12:43:10 by aho              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> 
#include <string.h> 
#include <stdlib.h>

char *ft_itoa(int n)
{
	int i;
	char *str; 
	i = 0; 
	str = (char*)malloc(3 * sizeof(char));
	str[i] = n + 48; 


	if (n/10 == 0) 
		return str;
	else
	{
		printf("recursion i: %d\n\n",i);
		str[i] = *ft_itoa(n/10); 
	}

	return str;
}

int main(void)
{
    printf("ft_itoa(5) %s \n", ft_itoa(5));
    printf("ft_itoa(0) %s \n", ft_itoa(0));
    printf("ft_itoa(123) %s \n", ft_itoa(123));

}
