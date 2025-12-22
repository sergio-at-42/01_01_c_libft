/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Serge <serge.beldjaoui@learner.42.tech>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 13:16:07 by sbeldjao          #+#    #+#             */
/*   Updated: 2025/11/20 18:09:09 by Serge            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Description : Allocates memory (using malloc) and returns a new node. 
The ’content’ member variable is initialized with the given parameter ’content’.
The variable ’next’ is initialized to NULL.
*/
/*
Return : A pointer to the new node
*/
t_list	*ft_lstnew(void *content)
{
	t_list	*lst_new;

	lst_new = (t_list *)malloc(sizeof(t_list));
	if (!lst_new)
		return (NULL);
	lst_new->content = content;
	lst_new->next = NULL;
	return (lst_new);
}
