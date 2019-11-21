/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memccpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: bnijland <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/30 15:23:33 by bnijland      #+#    #+#                 */
/*   Updated: 2019/11/21 12:23:17 by bnijland      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char			*dp;
	unsigned char			*sp;
	unsigned char			a;
	int						i;

	dp = (unsigned char *)dst;
	sp = (unsigned char *)src;
	a = (unsigned char)c;
	i = 0;
	while (n >= 1)
	{
		dp[i] = sp[i];
		if (sp[i] == a)
			return (&dst[i + 1]);
		i++;
		n--;
	}
	return (0);
}
