/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aho <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/20 10:23:25 by aho               #+#    #+#             */
/*   Updated: 2017/09/25 14:20:00 by aho              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h> 

int ft_strlen(const char *s); 

char *ft_strdup(const char *s1)
{
	int i;

	char *dupe = (char*)malloc((ft_strlen(s1) + 1) * sizeof(char));

	i = 0; 

	if (s1 == 0) 
		return 0; 
	while (s1[i] != '\0')
	{
		dupe[i] = s1[i]; 
		i++;
	}
	dupe[i] = '\0'; 
//	free(dupe);
	return dupe; 
}
