/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strnstr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: bnijland <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/31 22:50:54 by bnijland      #+#    #+#                 */
/*   Updated: 2019/11/18 19:29:19 by bnijland      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	j;
	char	*a;

	i = 0;
	j = 0;
	a = (char *)s1;
	if (s2[0] == '\0' || !s2)
		return (a);
	while (i < n && a[i])
	{
		if (s1[i] == s2[j])
		{
			i++;
			j++;
		}
		if (s2[j] == 0)
			return ((char *)&a[i - j]);
		if (s1[i] != s2[j] && i < n)
		{
			i = (i - j) + 1;
			j = 0;
		}
	}
	return (0);
}
