/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Serge <serge.beldjaoui@learner.42.tech>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 12:47:02 by sbeldjao          #+#    #+#             */
/*   Updated: 2025/11/24 12:53:35 by Serge            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Description : The strnstr() function locates the first occurrence of the 
null-terminated string little in the string big, where not more than len 
characters are searched. Characters that appear after a ‘\0’ character are 
not searched. 
Since the strnstr() function is a FreeBSD specific API, it should only be used 
when portability is not a concern.
*/
/*
Return : If little is an empty string, big is returned; if little occurs 
nowhere in big, NULL is returned; otherwise a pointer to the first character 
of the first occurrence of little is returned.
*/
char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	len_little;

	if (!(*little))
		return ((char *)big);
	len_little = ft_strlen(little);
	if (len == 0 || len < len_little)
		return (NULL);
	i = 0;
	while (big[i] && i != len - len_little + 1)
	{
		j = 0;
		while (little[j] == big[i + j] && big[i + j] && little[j])
			j++;
		if (!little[j])
			return ((char *)(big + i));
		i++;
	}
	return (NULL);
}
