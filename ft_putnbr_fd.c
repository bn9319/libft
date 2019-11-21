/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putnbr_fd.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: bnijland <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/06 19:24:00 by bnijland      #+#    #+#                 */
/*   Updated: 2019/11/14 16:04:49 by bnijland      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_putchar1_fd(char c, int fd)
{
	write(fd, &c, 1);
}

void		ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		ft_putchar1_fd('-', fd);
		ft_putchar1_fd('2', fd);
		ft_putnbr_fd(147483648, fd);
	}
	if (n < 0 && n != -2147483648)
	{
		ft_putchar1_fd('-', fd);
		n *= -1;
	}
	if (n >= 10)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putchar1_fd(n % 10 + '0', fd);
	}
	if (n < 10 && n >= 0)
		ft_putchar1_fd(n + '0', fd);
}
