/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcmp.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: bnijland <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/30 16:30:03 by bnijland      #+#    #+#                 */
/*   Updated: 2019/11/12 20:39:11 by bnijland      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char		*s1a;
	unsigned char		*s2a;
	size_t				i;

	s1a = (unsigned char *)s1;
	s2a = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (s1a[i] != s2a[i])
		{
			return (s1a[i] - s2a[i]);
		}
		i++;
	}
	return (0);
}
