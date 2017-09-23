/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aho <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/20 21:33:07 by aho               #+#    #+#             */
/*   Updated: 2017/09/21 13:43:43 by aho              ###   ########.fr       */
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

char *ft_strstr(char *full_str, char *sub_str)
{
	int i; 
	int j; 
	
	char *ptr;
	i = 0; 

	while (full_str[i] != '\0')
	{
		j = 0; 

		if (full_str[i] == sub_str[j])
			ptr = &full_str[i]; 

		while (full_str[i] == sub_str[j])
		{
			i++;
			j++;
		}

		if (sub_str[j] == '\0')
			return ptr;
		else
			i++; 
	}

/** how to detect empty string??
	if (sub_str == NULL) 
		return full_str;
**/

	return NULL;
}

int main(void)
{
	char *string1; 
	char *substr1; 

	string1 = "hello my name is annie"; 
	substr1 = "my name"; 
	
	printf("ft_strstr: %s \n", ft_strstr(string1, substr1));


	char *string2; 
	char *substr2; 

	string2 = "hello my name is annie"; 
	substr2 = "my name"; 
	
	printf("STANDARD LIBRARY VERSION: strstr: %s \n\n", strstr(string2, substr2));

	printf("ft_strstr('hello world', ''): %s \n", ft_strstr("hello world", ""));
	printf("STANDARD LIBRARY VERSION strstr: %s \n\n", strstr("hello world", ""));

	printf("ft_strstr('hello world', 'cat'): %s \n", ft_strstr("hello world", "cat"));
	printf("STANDARD LIBRARY VERSION strstr: %s \n\n", strstr("hello world", "cat"));

	printf("ft_strstr('hello my name is annie', 'my name'): %s \n", ft_strstr("hello my name is annie", "my name"));
	printf("STANDARD LIBRARY VERSION strstr: %s \n\n", strstr("hello my name is annie", "my name"));

	printf("ft_strstr('hello worly world', 'world'): %s \n", ft_strstr("hello worly world", "world"));
	printf("STANDARD LIBRARY VERSION strstr: %s \n\n", strstr("hello worly world", "world"));

}
