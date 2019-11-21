/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memset.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: bnijland <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/30 12:14:48 by bnijland      #+#    #+#                 */
/*   Updated: 2019/11/14 20:37:44 by bnijland      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t n)
{
	int				i;
	unsigned char	*ptr;

	ptr = (unsigned char *)b;
	i = 0;
	while (n >= 1)
	{
		ptr[i] = c;
		n--;
		i++;
	}
	return (b);
}
