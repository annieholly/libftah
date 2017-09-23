/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aho <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/20 17:53:21 by aho               #+#    #+#             */
/*   Updated: 2017/09/20 18:44:05 by aho              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h> 
#include <string.h>

int ft_strlen(char *str)
{
	int i;

	i = 0;
	while(str[i] != '\0')
		i++;
	return i;
}

char *ft_strncat(char *s1, char *s2, int n)
{
	int i; 
	int j;
	int concat_str_len; 

	i = 0; 
	j = 0; 
	concat_str_len = ft_strlen(s1) + ft_strlen(s2);

	//concat_str_len = 11; 
	//printf("concat_str_len: %d \n", concat_str_len);

	//should next line be allocating enough size for 12 chars? 
	char *concat_string = (char*)malloc(concat_str_len * sizeof(char));

	while((i < n) && s1[i] != '\0')
	{
		concat_string[i] = s1[i]; 
		i++; 
	}

	while((i < n) && s2[i] != '\0') 
	{
		concat_string[i] = s2[j]; 
		i++;
		j++; 
	}

	concat_string[i] = '\0'; 

	return concat_string;
}

int main(void)
{
	char *string1;

/*  TESTING STANDARD LIBRARY FUNCTION - DOES NOT WORK, NOT ENOUGH MEMORY
	char *string2;

	//how to arbitrarily malloc enough space for string?
	string2 = (char*)malloc(100 *sizeof(char));
*/
	string1 = ft_strncat("hello ", "world", 8);	
	printf("ft_strncat('hello ', 'world'): '%s' \n", string1);

/*
	string2 = strcat("hello ", "world");	
	printf("strcat('hello ', 'world'): '%s' \n", string2);
*/

}
