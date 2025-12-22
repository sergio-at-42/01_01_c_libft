/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbeldjao <sbeldjao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 10:51:57 by sbeldjao          #+#    #+#             */
/*   Updated: 2025/11/19 11:19:06 by sbeldjao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Description : The memcmp() function compares the first n bytes (each interpreted
 as unsigned char) of the memory areas s1 and s2.
*/
/*
Return : The memcmp() function returns an integer less than, equal to, or 
greater than zero if the first n bytes of s1 is found, respectively, to be 
less than, to match, or be greater than the first n bytes of s2.
For a nonzero return value, the sign is determined by the sign of the 
difference between the first pair of bytes (interpreted as unsigned char) that 
differ in s1 and s2.
If n is zero, the return value is zero.
*/
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	char	*p_s1;
	char	*p_s2;

	if (n == 0)
		return (0);
	p_s1 = (char *)s1;
	p_s2 = (char *)s2;
	i = 0;
	while (p_s1[i] == p_s2[i] && i < n)
		i++;
	if (i == n)
		return (0);
	return ((unsigned char)p_s1[i] - (unsigned char)p_s2[i]);
}
