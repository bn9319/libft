/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: bnijland <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/14 18:24:35 by bnijland      #+#    #+#                 */
/*   Updated: 2019/11/21 17:42:48 by bnijland      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		count_char(int i, const char *s, char c)
{
	int		j;

	j = 0;
	while (s[i])
	{
		j++;
		i++;
		if (s[i] == c || s[i] == 0)
			return (j);
	}
	return (0);
}

static int		count_words(const char *s, char c)
{
	int		i;
	int		counter;

	if (s == 0)
		return (0);
	i = 0;
	counter = 0;
	while (s[i])
	{
		if ((s[i] != c && s[i + 1] == c) || (s[i] != c && s[i + 1] == 0))
			counter++;
		i++;
	}
	return (counter);
}

static char		*make_subs(char const *s, int i, int j)
{
	char	*s1;
	int		k;

	k = 0;
	s1 = (char*)malloc(j + 1);
	if (s1 == 0)
	{
		return (0);
	}
	while (k < j)
	{
		s1[k] = s[i];
		i++;
		k++;
	}
	s1[k] = 0;
	return (s1);
}

static char		**ft_free(char **s)
{
	int i;

	i = 0;
	while (s[i])
	{
		free(s[i]);
		i++;
	}
	free(s);
	return (0);
}

char			**ft_split(char const *s, char c)
{
	char	**s1;
	int		j;
	int		counter;
	int		countera;
	int		i;

	countera = 0;
	i = 0;
	counter = count_words(s, c);
	s1 = (char**)malloc(sizeof(char *) * (counter + 1));
	if (s1 == 0)
		return (0);
	while (countera < counter)
	{
		while (s[i] == c && c != 0)
			i++;
		j = count_char(i, s, c);
		s1[countera] = make_subs(s, i, j);
		if (s1[countera] == 0)
			return (ft_free(s1));
		i += j;
		countera++;
	}
	s1[countera] = NULL;
	return (s1);
}
