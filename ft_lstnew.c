/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aho <aho@student.42.us.org>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/09 01:00:29 by aho               #+#    #+#             */
/*   Updated: 2017/10/16 02:07:47 by aho              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*link;

	link = ft_memalloc(sizeof(t_list));
	if (link == NULL)
		return (NULL);
	if (content == NULL)
	{
		link->content = NULL;
		link->content_size = 0;
		link->next = NULL;
		return (link);
	}
	link->content = ft_memalloc(content_size);
	ft_memcpy(link->content, content, content_size);
	link->content_size = content_size;
	link->next = NULL;
	return (link);
}
