/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Serge <serge.beldjaoui@learner.42.tech>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 11:20:35 by sbeldjao          #+#    #+#             */
/*   Updated: 2025/11/20 18:10:21 by Serge            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Description : Outputs the integer ’n’ to the given file descriptor.
*/
/*
Return : None
*/
static void	ft_write_mod(int n, int fd)
{
	if (n / 10 != 0)
		ft_write_mod(n / 10, fd);
	if (n < 0)
		ft_putchar_fd(48 - n % 10, fd);
	else
		ft_putchar_fd(48 + n % 10, fd);
}

void	ft_putnbr_fd(int n, int fd)
{
	if (n < 0)
		ft_putchar_fd('-', fd);
	ft_write_mod(n, fd);
}
