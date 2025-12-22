/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbeldjao <sbeldjao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 15:35:29 by sbeldjao          #+#    #+#             */
/*   Updated: 2025/11/19 11:30:31 by sbeldjao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Description : The strdup() function returns a pointer to a new string which is 
a duplicate of the string s. 
Memory for the new string is obtained with malloc, and can be freed with free.
*/
/*
Return : On success, the strdup() function returns a pointer to the duplicated 
string. It returns NULL if insufficient memory was available, with errno set 
to indicate the error.
*/
char	*ft_strdup(const char *s)
{
	size_t	size;
	size_t	i;
	char	*str_dup;

	size = ft_strlen(s) + 1;
	str_dup = (char *)malloc(size * sizeof(char));
	i = 0;
	while (i < size)
	{
		str_dup[i] = s[i];
		i++;
	}
	return (str_dup);
}
