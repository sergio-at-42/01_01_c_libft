/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbeldjao <sbeldjao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 11:21:12 by sbeldjao          #+#    #+#             */
/*   Updated: 2025/11/19 11:18:34 by sbeldjao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Description : The memmove() function copies n bytes from memory area src to 
memory area dest. 
The memory areas may overlap: copying takes place as though the bytes in src 
are first copied into a temporary array that does not overlap src or dest, and 
the bytes are then copied from the temporary array to dest.
*/
/*
Return : The memmove() function returns a pointer to dest.
*/
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*p_src;
	char	*p_dest;

	p_src = (char *)src;
	p_dest = dest;
	if (p_dest > p_src)
	{
		i = n;
		while (i > 0)
		{
			i--;
			p_dest[i] = p_src[i];
		}
		return (p_dest);
	}
	return (ft_memcpy(dest, src, n));
}
