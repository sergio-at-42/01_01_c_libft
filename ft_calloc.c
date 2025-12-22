/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Serge <serge.beldjaoui@learner.42.tech>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 18:06:28 by Serge             #+#    #+#             */
/*   Updated: 2025/11/20 18:06:36 by Serge            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Description : The calloc() function allocates memory for an array of nmemb 
elements of size bytes each and returns a pointer to the allocated memory. 
The memory is set to zero. If nmemb or size is 0, then calloc() returns a unique
 pointer value that can later be successfully passed to free().
If the multiplication of nmemb and size would result in integer overflow, then 
calloc() returns an error. 
By contrast, an integer overflow would not be detected in the following call to 
malloc(), with the result that an incorrectly sized block of memory would be 
allocated : malloc(nmemb * size);
*/
/*
Return : The malloc(), calloc(), realloc(), and reallocarray() functions return 
a pointer to the allocated memory, which is suitably aligned for any type that 
fits into the requested size or less. On error, these functions return NULL and 
set errno. Attempting to allocate more than PTRDIFF_MAX bytes is considered an 
error, as an object that large could cause later pointer subtraction to 
overflow.
*/
void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*m;
	size_t	total_size;
	size_t	size_max;

	size_max = -1;
	if (nmemb == 0 || size == 0)
		return (malloc(0));
	if (size_max / nmemb < size)
		return (NULL);
	total_size = nmemb * size;
	m = (char *)malloc(total_size);
	if (!m)
		return (NULL);
	ft_bzero(m, total_size);
	return (m);
}
