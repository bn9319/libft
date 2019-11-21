/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: bnijland <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/01 20:08:14 by bnijland      #+#    #+#                 */
/*   Updated: 2019/11/15 15:49:51 by bnijland      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t		i;
	size_t		j;
	size_t		length;

	i = ft_strlen(src);
	length = ft_strlen(dst);
	j = 0;
	if (dstsize == 0)
		return (i);
	if (dstsize < length)
		return (dstsize + i);
	else
		i += length;
	while (src[j] && length + 1 < dstsize)
	{
		dst[length] = src[j];
		j++;
		length++;
	}
	dst[length] = 0;
	return (i);
}
