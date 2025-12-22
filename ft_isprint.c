/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Serge <serge.beldjaoui@learner.42.tech>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 18:26:34 by sbeldjao          #+#    #+#             */
/*   Updated: 2025/11/20 18:07:49 by Serge            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Description : checks for any printable character including space.
*/
/*
Return : The values returned are 1 if the character c falls into the tested 
class, and 0 if not.
*/
int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}
