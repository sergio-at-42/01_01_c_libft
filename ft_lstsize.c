/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Serge <serge.beldjaoui@learner.42.tech>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 13:17:50 by sbeldjao          #+#    #+#             */
/*   Updated: 2025/11/20 18:09:17 by Serge            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Description : Counts the number of nodes in the list.
*/
/*
Return : The length of the list
*/
int	ft_lstsize(t_list *lst)
{
	int	nb_lst;

	nb_lst = 0;
	while (lst)
	{
		nb_lst++;
		lst = lst->next;
	}
	return (nb_lst);
}
