/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Serge <serge.beldjaoui@learner.42.tech>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 11:05:11 by sbeldjao          #+#    #+#             */
/*   Updated: 2025/11/24 12:42:22 by Serge            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Description : Applies the function ’f’ on each character of the string passed 
as argument, passing its index as first argument. Each character is passed by 
address to ’f’ to be modified if necessary.
*/
/*
Return : None
*/
void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (s && f)
	{
		i = 0;
		while (s[i])
		{
			f(i, (s + i));
			i++;
		}
	}
}
