/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbeldjao <sbeldjao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 19:42:41 by sbeldjao          #+#    #+#             */
/*   Updated: 2025/11/19 11:39:44 by sbeldjao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Description : These functions convert uppercase letters to lowercase.
If c is an uppercase letter, tolower() returns its lowercase equivalent, if a 
lowercase representation exists in the current locale. Otherwise, it returns c.
If c is neither an unsigned char value nor EOF, the behavior of these functions
 is undefined.
*/
/*
Return : The value returned is that of the converted letter, or c if the 
conversion was not possible.
*/
int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		c = c + 32;
	return (c);
}
