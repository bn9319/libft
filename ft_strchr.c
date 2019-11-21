/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: bnijland <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/28 16:38:35 by bnijland      #+#    #+#                 */
/*   Updated: 2019/10/31 20:17:21 by bnijland      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s1, int c)
{
	int		i;
	char	*ptr;

	i = 0;
	ptr = (char *)s1;
	while (s1[i])
	{
		if (s1[i] == c)
		{
			return (&ptr[i]);
		}
		i++;
	}
	if (c == '\0')
		return (&ptr[i]);
	return (0);
}
