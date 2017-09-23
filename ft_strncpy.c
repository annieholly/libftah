/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aho <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/20 16:13:25 by aho               #+#    #+#             */
/*   Updated: 2017/09/20 17:47:30 by aho              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h> 
#include <string.h> 

char *ft_strncpy(char  *dst, const char *src, int n) 
{
	int i; 
	i = 0 ; 
	while (i < n)
	{
		dst[i] = src[i]; 
		i++; 
	}
//	dst[i] = '\0'; 
	return dst;
}

int main(void) 
{
	//   char *string1 = "annie";
    char copystring1[1];
    char copystring2[10];

    ft_strncpy(copystring1, "hello leo", 5);
    printf("ft_strncpy(copystring1, 'hello'): '%s' \n", copystring1);


    strncpy(copystring2, "hello leo", 5);
    printf("standard strncpy(copystring2, 'hello'): '%s' \n", copystring2);

/**
    ft_strcpy(copystring1, string1);
    printf("ft_strcpy(copystring1, string1): '%s' \n", copystring1);

    strcpy(copystring2, string1);
    printf("strcpy(copystring2, string1): '%s' \n", copystring2);
**/

}
