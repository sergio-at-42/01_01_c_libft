/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbeldjao <sbeldjao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 16:39:58 by sbeldjao          #+#    #+#             */
/*   Updated: 2025/11/19 11:40:44 by sbeldjao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Description : The strrchr() function returns a pointer to the last occurrence 
of the character c in the string s.
Here "character" means "byte"; these functions do not work with wide or 
multibyte characters.
*/
/*
Return : The strchr() and strrchr() functions return a pointer to the matched 
character or NULL if the character is not found. The terminating null byte is 
considered part of the string, so that if c is specified as '\0', these 
functions return a pointer to the terminator.
*/
char	*ft_strrchr(const char *s, int c)
{
	char	*i;

	i = (char *)(s + ft_strlen(s));
	while (*i != (char)c && i != s)
		i--;
	if (i == s && (char)c != *s)
		return (NULL);
	return (i);
}
