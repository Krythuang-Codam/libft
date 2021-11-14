/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_striteri.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: khuang <khuang@student.42.fr>                +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/21 12:38:54 by khuang        #+#    #+#                 */
/*   Updated: 2021/10/25 11:21:52 by khuang        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	counter;

	counter = 0;
	if (!s || !f)
		return ;
	while (s[counter])
	{
		f(counter, &s[counter]);
		counter++;
	}
}
