/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: bnijland <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/30 16:19:44 by bnijland      #+#    #+#                 */
/*   Updated: 2019/11/20 17:37:38 by bnijland      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char		a;
	unsigned char		*s1;
	int					i;

	a = (unsigned char)c;
	s1 = (unsigned char *)s;
	i = 0;
	while (n >= 1)
	{
		if (s1[i] == a)
			return ((void*)&s1[i]);
		i++;
		n--;
	}
	return (NULL);
}
