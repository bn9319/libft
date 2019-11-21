/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memmove.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: bnijland <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/30 15:46:34 by bnijland      #+#    #+#                 */
/*   Updated: 2019/11/21 12:24:16 by bnijland      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*dp;
	const char	*sp;
	int			i;

	dp = (char *)dst;
	sp = (char *)src;
	i = 0;
	if (dst == 0 && src == 0)
		return (0);
	while (len >= 1 && &dst[0] >= &src[0])
	{
		dp[len - 1] = sp[len - 1];
		len--;
	}
	while (len >= 1)
	{
		dp[i] = sp[i];
		i++;
		len--;
	}
	return (dst);
}
