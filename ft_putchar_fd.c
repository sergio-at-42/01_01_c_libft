/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbeldjao <sbeldjao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 11:11:49 by sbeldjao          #+#    #+#             */
/*   Updated: 2025/11/19 11:18:14 by sbeldjao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Description : Outputs the character ’c’ to the given file descriptor.
*/
/*
Return : None
*/
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
