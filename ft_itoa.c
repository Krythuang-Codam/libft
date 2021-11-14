/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: khuang <khuang@student.42.fr>                +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/21 12:33:25 by khuang        #+#    #+#                 */
/*   Updated: 2021/10/28 12:35:57 by khuang        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	n_length(int n)
{
	int	length;

	length = 0;
	if (n <= 0)
	{
		length++;
	}
	while (n)
	{
		length++;
		n /= 10;
	}
	return (length);
}

char	*ft_itoa(int n)
{
	char	*return_string;
	int		length;
	long	number;

	number = n;
	length = n_length(n);
	if (number == 0)
		return (ft_strdup("0"));
	return_string = malloc(sizeof(char) * (length + 1));
	if (!(return_string))
		return (ft_strdup(""));
	if (number < 0)
	{
		return_string[0] = '-';
		number = -number;
	}
	return_string[length--] = '\0';
	while (number)
	{
		return_string[length] = number % 10 + '0';
		length--;
		number = number / 10;
	}
	return (return_string);
}
