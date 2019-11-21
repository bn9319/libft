/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strtrim.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: bnijland <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/06 17:16:02 by bnijland      #+#    #+#                 */
/*   Updated: 2019/11/18 19:31:10 by bnijland      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_begin(char const *s1, char const *set)
{
	int			i;
	int			j;

	i = 0;
	j = 0;
	if (set[0] == '\0' || !set)
		return (i);
	while (s1[i])
	{
		while (s1[i] != set[j])
		{
			j++;
			while (s1[i] == set[j])
			{
				j = 0;
				i++;
			}
			if (set[j] == 0)
				return (i);
		}
		if (s1[i] == set[j])
			i++;
	}
	return (i);
}

static int		ft_end(char const *s1, char const *set)
{
	int			j;
	int			len;

	len = ft_strlen(s1) - 1;
	j = 0;
	if (set[0] == '\0' || !set)
		return (len);
	while (len >= 1)
	{
		while (s1[len] != set[j])
		{
			j++;
			while (s1[len] == set[j])
			{
				j = 0;
				len--;
			}
			if (set[j] == 0)
				return (len);
		}
		if (s1[len] == set[j])
			len--;
	}
	return (len);
}

char			*ft_strtrim(char const *s1, char const *set)
{
	char	*sp;
	int		b;
	int		e;
	int		i;

	i = 0;
	if (s1 == 0)
		return (0);
	b = ft_begin(s1, set);
	e = ft_end(s1, set);
	if (e < b)
		sp = (char *)malloc(1);
	else
		sp = (char *)malloc(e - b + 2);
	if (sp == 0)
		return (0);
	while (b <= e)
	{
		sp[i] = s1[b];
		b++;
		i++;
	}
	sp[i] = '\0';
	return (sp);
}
