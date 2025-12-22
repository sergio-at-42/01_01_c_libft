/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Serge <serge.beldjaoui@learner.42.tech>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 19:53:35 by sbeldjao          #+#    #+#             */
/*   Updated: 2025/11/24 12:20:22 by Serge            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Description : Allocates (with malloc) and returns a new string, which is the 
result of the concatenation of ’s1’ and ’s2’.
*/
/*
Return : The new string. NULL if the allocation fails.
*/
char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1_size;
	size_t	s2_size;
	char	*str_join;
	size_t	size_max;

	if (!s1 || !s2)
		return (NULL);
	size_max = -1;
	s1_size = ft_strlen(s1);
	s2_size = ft_strlen(s2);
	if (size_max - s1_size < s2_size)
		return (NULL);
	str_join = (char *)malloc((s1_size + s2_size + 1) * sizeof(char));
	if (!str_join)
		return (NULL);
	ft_strlcpy(str_join, s1, s1_size + 1);
	ft_strlcat(str_join, s2, s1_size + s2_size + 1);
	return (str_join);
}
