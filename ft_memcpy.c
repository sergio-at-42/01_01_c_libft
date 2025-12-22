/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbeldjao <sbeldjao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 20:57:53 by sbeldjao          #+#    #+#             */
/*   Updated: 2025/11/19 11:18:50 by sbeldjao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Description : The memcpy() function copies n bytes from memory area src to 
memory area dest. 
The memory areas must not overlap. Use memmove if the memory areas do overlap.
*/
/*
Return : The memcpy() function returns a pointer to dest.
*/
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*p_src;
	char	*p_dest;

	p_src = (char *)src;
	p_dest = dest;
	i = 0;
	while (i < n)
	{
		p_dest[i] = p_src[i];
		i++;
	}
	return (dest);
}
