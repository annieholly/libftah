/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aho <aho@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/23 19:12:45 by aho               #+#    #+#             */
/*   Updated: 2017/09/24 01:10:19 by aho              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h> 
#include <string.h> 


void *ft_memmove(void *dst, const void *src, size_t len)
{
	int i; 
	i = 0; 

	while (i < len) 
	{
		dst[i] = src[i]
	}

	return dst;
}


void *ft_memmove(void *dst, const void *src, size_t len)
{
	int i; 
	i = 0; 

	while (i < len) 
	{
		dst[i] = src[i]
	}

	return dst;
}


int main()
{
	char str1[12] = "hello world";

	printf("before ft_memmove: %s\n", str1);
	ft_memmove(str1 + 6, '!', 5*sizeof(char));
	printf("after ft_memmove: %s\n\n", str1);

// STANDARD LIBRARY TEST
//	void *memmove(void *ptr, int x, size_t n);

	char str2[12] = "hello world";
	printf("before memmove: %s\n", str2);
	memmove(str2 + 6, '!', 5*sizeof(char));
	printf("after memmove: %s\n\n", str2);

}
