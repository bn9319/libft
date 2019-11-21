/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: bnijland <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/09 17:48:01 by bnijland      #+#    #+#                 */
/*   Updated: 2019/11/09 18:40:37 by bnijland      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_count(long int n)
{
	int			counter;

	counter = 10;
	if (n == 0)
		return (1);
	if (n == -2147483648)
		return (11);
	if (n < 0)
	{
		counter--;
		n *= -1;
	}
	else if (n >= 1000000000)
		return (counter);
	while (n > 0)
	{
		n /= 10;
		counter--;
	}
	return (10 - counter);
}

static char		ft_putnb(long int n)
{
	if (n < 0)
		n *= -1;
	if (n >= 10)
	{
		return (n % 10 + '0');
	}
	else
		return (n + '0');
}

char			*ft_itoa(int n)
{
	char		*s1;
	int			j;
	int			count;
	long int	n2;

	n2 = (long int)n;
	count = ft_count(n2);
	j = 0;
	s1 = (char *)malloc(count + 1);
	if (s1 == 0)
		return (0);
	s1[count] = 0;
	count--;
	if (n2 < 0)
	{
		s1[j] = '-';
		j++;
	}
	while (count >= j)
	{
		s1[count] = ft_putnb(n2);
		count--;
		n2 /= 10;
	}
	return (s1);
}
