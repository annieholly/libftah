/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aho <aho@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/23 17:42:13 by aho               #+#    #+#             */
/*   Updated: 2017/09/27 23:27:23 by aho              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
void *ft_memset(void *b, int c, size_t len)
{
    size_t i;
    unsigned char *str;
    unsigned char ch;

    i = 0;
    str = b;
    ch = (char)c;
    while (i < len)
    {
        str[i] = ch;
        i++;
    }
    return b;
}
*/

char *ft_strnew(size_t size)
{
	int i; 
	char *str; 

	i = 0; 
	str = (char*)malloc((size + 1) * sizeof(char*));

	ft_memset(str, '\0', size*sizeof(char));



/**
	while(size > 0)
	{
		str[i] = '\0'; 
		i++;
		size--;
	}

**/

	return str; 
}

/*
int main() 
{
	char *str1; 
	str1 = ft_strnew(5); 
	printf("ft_strnew: %s", str1); 
	
}
*/
