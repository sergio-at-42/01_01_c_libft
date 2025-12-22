/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Serge <serge.beldjaoui@learner.42.tech>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 19:30:39 by sbeldjao          #+#    #+#             */
/*   Updated: 2025/11/20 18:07:11 by Serge            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Description : The  bzero() function erases the data in the n bytes of the 
memory starting at the location pointed to by s, by writing zeros 
(bytes containing '\0') to that area.
*/
/*
Return : None.
*/
void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*p;

	p = s;
	i = 0;
	while (i < n)
	{
		p[i] = 0;
		i++;
	}
}
