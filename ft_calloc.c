/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_calloc.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: bnijland <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/06 12:54:12 by bnijland      #+#    #+#                 */
/*   Updated: 2019/11/15 20:07:07 by bnijland      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char		*s1;
	size_t		i;
	size_t		n;

	i = 0;
	n = count * size;
	s1 = malloc(count * size);
	if (s1 == 0)
		return (0);
	while (n >= 1)
	{
		s1[i] = 0;
		i++;
		n--;
	}
	return (s1);
}
