/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbeldjao <sbeldjao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 19:39:20 by sbeldjao          #+#    #+#             */
/*   Updated: 2025/11/19 11:39:37 by sbeldjao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Description : These functions convert lowercase letters to uppercase.
If  c  is a lowercase letter, toupper() returns its uppercase equivalent, if an 
uppercase representation exists in the current locale. Otherwise, it returns c.
If c is neither an unsigned char value nor EOF, the behavior of these functions 
is undefined.
*/
/*
Return : The value returned is that of the converted letter, or c if the 
conversion was not possible.
*/
int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		c = c - 32;
	return (c);
}
