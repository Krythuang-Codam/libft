/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: khuang <khuang@student.42.fr>                +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/11 17:14:29 by khuang        #+#    #+#                 */
/*   Updated: 2021/10/28 12:36:47 by khuang        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			counter;
	unsigned char	*s_copy;

	counter = 0;
	s_copy = (unsigned char *)s;
	while (counter < n)
	{
		if (s_copy[counter] == (unsigned char)c)
		{
			return (s_copy + counter);
		}
		counter++;
	}
	return (0);
}
