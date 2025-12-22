/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Serge <serge.beldjaoui@learner.42.tech>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 18:25:44 by sbeldjao          #+#    #+#             */
/*   Updated: 2025/11/20 18:07:30 by Serge            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Description : checks whether c is a 7-bit unsigned char value that fits into 
the ASCII character set.
*/
/*
Return : The values returned are 1 if the character c falls into the tested 
class, and 0 if not.
*/
int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
