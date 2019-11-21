/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcpy.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: bnijland <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/30 14:39:05 by bnijland      #+#    #+#                 */
/*   Updated: 2019/11/21 12:23:57 by bnijland      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*dp;
	const char	*sp;
	int			i;

	dp = (char *)dst;
	sp = (char *)src;
	i = 0;
	if (dp == '\0' && sp == '\0')
		return (dst);
	while (n >= 1)
	{
		dp[i] = sp[i];
		i++;
		n--;
	}
	return (dst);
}
