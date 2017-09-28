/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aho <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/24 14:16:24 by aho               #+#    #+#             */
/*   Updated: 2017/09/28 04:15:42 by aho              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memset(void *b, int c, size_t len)
{
	unsigned char *str; 
	unsigned char ch; 

	str = b;
	ch = c; 
	while (0 < len) 
	{
		*str = ch; 
		str++; 
		len--; 
	}
	return (b);
}


/*
int main()
{


	int nums[] = {1,2,3,4,5}; 
	int *ptr_numarr;
	ptr_numarr = nums; 
	memset(ptr_numarr, 0, sizeof(int) * 5);
	
	for(int i = 0; i < 5; i++)
	{
	printf("[%i] ", nums[i]); 
	}

	char str1[12] = "hello world";

	printf("\nbefore ft_memset: %s\n", str1);
	ft_memset(str1 + 6, '!', 5*sizeof(char));
	printf("after ft_memset: %s\n\n", str1);


// STANDARD LIBRARY TEST
//	void *memset(void *ptr, int x, size_t n);

	char str2[12] = "hello world";
	printf("before memset: %s\n", str2);
	memset(str2 + 6, '!', 5*sizeof(char));
	printf("after memset: %s\n\n", str2);


}
*/
