/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Serge <serge.beldjaoui@learner.42.tech>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 18:23:26 by sbeldjao          #+#    #+#             */
/*   Updated: 2025/11/20 18:07:39 by Serge            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Description : checks for a digit (0 through 9).
*/
/*
Return : The values returned are 1 if the character c falls into the tested 
class, and 0 if not.
*/
int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
