/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbeldjao <sbeldjao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 19:47:24 by sbeldjao          #+#    #+#             */
/*   Updated: 2025/11/19 11:19:20 by sbeldjao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Description : The memchr() function scans the initial n bytes of the memory area
 pointed to by s for the first instance of c. 
Both c and the bytes of the memory area pointed to by s are interpreted as 
unsigned char.
*/
/*
Return : The memchr() function return a pointer to the matching byte or NULL 
if the character does not occur in the given memory area.
*/
void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*p;

	p = (char *)s;
	i = 0;
	while (i < n)
	{
		if (p[i] == (char)c)
			return (p + i);
		i++;
	}
	return (NULL);
}
