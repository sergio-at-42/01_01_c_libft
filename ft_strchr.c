/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbeldjao <sbeldjao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 16:13:35 by sbeldjao          #+#    #+#             */
/*   Updated: 2025/11/19 11:30:48 by sbeldjao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Description : The strchr() function returns a pointer to the first occurrence 
of the character c in the string s. 
Here "character" means "byte"; these functions do not work with wide or 
multibyte characters.
*/
/*
Return : The strchr() function return a pointer to the matched character or 
NULL if the character is not found. 
The terminating null byte is considered part of the string, so that if c is 
specified as '\0', these functions return a pointer to the terminator.
*/
char	*ft_strchr(const char *s, int c)
{
	char	*p_s;

	p_s = (char *)s;
	while (*p_s != (char)c && *p_s != '\0')
		p_s++;
	if ((char)c != '\0' && *p_s == '\0')
		return (NULL);
	return (p_s);
}
