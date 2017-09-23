/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aho <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/20 11:52:22 by aho               #+#    #+#             */
/*   Updated: 2017/09/20 13:54:30 by aho              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> 
#include <string.h> 


char *ft_strcpy(char  *dst, const char *src) 
{
	int i; 
	i = 0 ; 
	while (src[i] != '\0')
	{
		dst[i] = src[i]; 
		i++; 
	}
	dst[i] = '\0'; 
	return dst;
}


int main(void) 
{
	//   char *string1 = "annie";
    char copystring1[1];
    char copystring2[1];

    ft_strcpy(copystring1, "hello leo");
    printf("ft_strcpy(copystring1, 'hello'): '%s' \n", copystring1);

    strcpy(copystring2, "hello leo");
    printf("strcpy(copystring2, 'hello'): '%s' \n", copystring2);

/**
    ft_strcpy(copystring1, string1);
    printf("ft_strcpy(copystring1, string1): '%s' \n", copystring1);

    strcpy(copystring2, string1);
    printf("strcpy(copystring2, string1): '%s' \n", copystring2);
**/

}
