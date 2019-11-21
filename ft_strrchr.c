/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strrchr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: bnijland <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/28 19:24:36 by bnijland      #+#    #+#                 */
/*   Updated: 2019/11/20 18:30:20 by bnijland      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	int		a;
	int		b;
	char	*s1;

	i = 0;
	a = 0;
	b = 0;
	s1 = (char *)s;
	while (s1[i])
	{
		if (s1[i] == c)
		{
			a = i;
			b = 1;
		}
		i++;
	}
	if (b == 1)
		return (&s1[a]);
	if (c == '\0')
		return (&s1[i]);
	return (0);
}
