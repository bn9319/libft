/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: bnijland <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/28 13:55:59 by bnijland      #+#    #+#                 */
/*   Updated: 2019/11/15 18:48:35 by bnijland      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(const char *s1)
{
	int					i;
	long int			number;
	long int			negative;

	i = 0;
	number = 0;
	negative = 1;
	while ((s1[i] >= 9 && s1[i] <= 13) || s1[i] == 32)
		i++;
	if (s1[i] == '-' || s1[i] == '+')
	{
		if (s1[i] == '-')
			negative = -1;
		i++;
	}
	while (s1[i] >= '0' && s1[i] <= '9')
	{
		number = number * 10 + s1[i] - 48;
		if (negative == -1 && number * -1 < number * -10)
			return (0);
		if (negative == 1 && number > number * 10)
			return (-1);
		i++;
	}
	return (number * negative);
}
