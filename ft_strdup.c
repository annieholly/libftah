/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aho <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/20 10:23:25 by aho               #+#    #+#             */
/*   Updated: 2017/09/20 13:20:06 by aho              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> 
#include <string.h>
#include <stdlib.h>

//helper function to be static
int ft_strlen(char *str)
{
	int i;
 
	i = 0; 
	while(str[i] != '\0') 
		i++; 
	return i; 
}

char *ft_strdup(char *str)
{
	int i;
	char *dupe = (char*)malloc(ft_strlen(str) * sizeof(char));

	i = 0; 
	while (str[i] != '\0')
	{
		dupe[i] = str[i]; 
		i++;
	}
	return dupe; 
}

int main(void)
{
	char *string1 = "annie"; 
	char *dupestring1; 
	char *dupestring2; 

	dupestring1 = ft_strdup(string1); 
	printf("ft_strdup(string1): '%s' \n", dupestring1);

	dupestring2 = strdup(string1); 
	printf("strdup(string1): '%s' \n", dupestring2);
}
