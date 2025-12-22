/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Serge <serge.beldjaoui@learner.42.tech>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 13:37:28 by sbeldjao          #+#    #+#             */
/*   Updated: 2025/11/22 19:55:37 by Serge            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*empty(void)
{
	char	*str_empty;

	str_empty = (char *)malloc(sizeof(char));
	if (str_empty == NULL)
		return (NULL);
	str_empty[0] = '\0';
	return (str_empty);
}

/*
Description : Allocates (with malloc) and returns a substring from the 
string ’s’. The substring begins at index ’start’ and is of maximum size ’len’.
*/
/*
Return : The substring. NULL if the allocation fails.
*/
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub_str;
	char	*p_s;
	size_t	len_s;
	size_t	i;

	p_s = (char *)s;
	len_s = ft_strlen(s);
	if (start >= len_s || len == 0)
		return (empty());
	if (len + start > len_s)
		len = len_s - start;
	sub_str = (char *)malloc((len + 1) * sizeof(char));
	if (sub_str == NULL)
		return (NULL);
	i = 0;
	while (p_s[start + i] && i < len)
	{
		sub_str[i] = p_s[start + i];
		i++;
	}
	sub_str[i] = '\0';
	return (sub_str);
}
