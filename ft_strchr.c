/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aho <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/20 18:47:48 by aho               #+#    #+#             */
/*   Updated: 2017/09/20 21:35:58 by aho              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h> 
#include <stdlib.h> 

int ft_strlen(char *str)
{
	int counter;
	counter = 0;
	while (str[counter] != '\0')
		counter++;
	return counter;
}

char *ft_strchr(char *str, char ch)
{
	int i; 
	int j; 

	i = 0; 
	j = 0; 

	char *new_string;

	new_string = (char*)malloc(ft_strlen(str) * sizeof(char));
	while (str[i] != '\0')
	{
		if (str[i] == ch)
		{
			while (str[i] != '\0') 
			{
				new_string[j] = str[i]; 
				j++; 
				i++; 
			}
		}
		else
			i++; 
	}

	return new_string;
}

int main(void)
{
	char *string1; 
	char char1; 

	string1 = "hello my name is annie"; 
	char1 = 'm'; 
	
	printf("ft_strchr string: %s \n", ft_strchr(string1, char1));



	char *string2; 
	char char2; 

	string2 = "hello my name is annie"; 
	char2 = 'm'; 
	
	printf("strchr string: %s \n", strchr(string2, char2));
}
