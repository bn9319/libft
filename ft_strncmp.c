/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncmp.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: bnijland <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/28 18:39:31 by bnijland      #+#    #+#                 */
/*   Updated: 2019/11/12 20:36:06 by bnijland      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*a;
	unsigned char	*b;

	i = 0;
	a = (unsigned char *)s1;
	b = (unsigned char *)s2;
	if (n == 0)
		return (0);
	while (n > i + 1 && a[i] && a[i] == b[i])
	{
		i++;
	}
	if (a[i] != b[i])
		return ((unsigned char)a[i] - b[i]);
	return (0);
}
