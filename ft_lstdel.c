/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aho <aho@student.42.us.org>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/10 23:29:44 by aho               #+#    #+#             */
/*   Updated: 2017/10/11 00:35:32 by aho              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstdel(t_list **alst, void(*del)(void *, size_t))
{
	t_list *current;
	t_list *tmp;
//	int i; 
//	tmp = NULL;
//	i = 0; 

	current = *alst;
	while (current)
	{
		tmp = current->next; 
  		del((current->content), (current->content_size)); 
		free(current); 
		current = tmp; 
	}
	*alst = NULL; 

/*
	del(current->content, current->content_size); 
	free(current); 
	current = NULL; 
(/

	while (current != NULL)
	{
		del(current->content, current->content_size); 
		free(current); 
		current = current->next;
	}
*/

}
