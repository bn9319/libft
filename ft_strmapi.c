/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strmapi.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: bnijland <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/08 14:02:09 by bnijland      #+#    #+#                 */
/*   Updated: 2019/11/10 14:30:07 by bnijland      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s1, char (*f)(unsigned int, char))
{
	size_t		i;
	char		*sp;

	i = 0;
	if (s1 == 0)
		return (0);
	while (s1[i])
		i++;
	sp = (char *)malloc(sizeof(char) * i + 1);
	if (sp == 0)
		return (0);
	i = 0;
	while (s1[i])
	{
		sp[i] = f(i, s1[i]);
		i++;
	}
	sp[i] = 0;
	return (sp);
}
