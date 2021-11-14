/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: khuang <khuang@student.42.fr>                +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/11 17:13:57 by khuang        #+#    #+#                 */
/*   Updated: 2021/10/28 12:35:02 by khuang        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	counter;
	int	return_int;
	int	negative;

	counter = 0;
	return_int = 0;
	negative = 1;
	while (str[counter] == '\t' || str[counter] == '\n' || str[counter] == '\v'
		|| str[counter] == '\f' || str[counter] == '\r' || str[counter] == ' ')
		counter++;
	if (str[counter] == '-' || str[counter] == '+')
	{
		if (str[counter] == '-')
			negative = -1;
		counter++;
	}
	while (str[counter] >= '0' && str[counter] <= '9')
	{
		return_int = 10 * return_int + str[counter] - '0';
		counter++;
	}
	return (return_int * negative);
}
