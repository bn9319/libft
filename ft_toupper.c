/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   toupper.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: bnijland <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/28 15:33:18 by bnijland      #+#    #+#                 */
/*   Updated: 2019/10/28 17:59:03 by bnijland      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int		ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		c -= 32;
	return (c);
}
