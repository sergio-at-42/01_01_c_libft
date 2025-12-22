/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Serge <serge.beldjaoui@learner.42.tech>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 10:59:51 by sbeldjao          #+#    #+#             */
/*   Updated: 2025/11/24 12:33:38 by Serge            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Description : Applies the function ’f’ to each character of the string ’s’, 
passing its index as the first argument and the character itself as the second. 
A new string is created (using malloc)) to collect the results from the 
successive applications of ’f’.
*/
/*
Return : The string created from the successive applications of ’f’. 
Returns NULL if the allocation fails.
*/
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str_mapi;
	unsigned int	i;

	if (!s || !f)
		return (NULL);
	str_mapi = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!str_mapi)
		return (NULL);
	if (!str_mapi)
		return (NULL);
	i = 0;
	while (s[i])
	{
		str_mapi[i] = f(i, s[i]);
		i++;
	}
	str_mapi[i] = '\0';
	return (str_mapi);
}
