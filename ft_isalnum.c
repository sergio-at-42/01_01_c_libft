/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Serge <serge.beldjaoui@learner.42.tech>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 18:25:01 by sbeldjao          #+#    #+#             */
/*   Updated: 2025/11/20 18:06:57 by Serge            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Description : checks for an alphanumeric character; 
it is equivalent to (isalpha(c) || isdigit(c)).
*/
/*
Return : The values returned are 1 if the character c falls into the tested 
class, and 0 if not.
*/
int	ft_isalnum(int c)
{
	if ((c >= 48 && c <= 57) || (c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	return (0);
}
