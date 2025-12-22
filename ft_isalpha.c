/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Serge <serge.beldjaoui@learner.42.tech>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 18:17:42 by sbeldjao          #+#    #+#             */
/*   Updated: 2025/11/20 18:07:22 by Serge            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Description : checks for an alphabetic character; in the standard "C" locale, 
it is equivalent to (isupper(c) || islower(c)). 
In some locales, there may be additional characters for which isalpha() is 
true—letters which are neither uppercase nor lowercase.
*/
/*
Return : The values returned are 1 if the character c falls into the tested 
class, and 0 if not.
*/
int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	return (0);
}
