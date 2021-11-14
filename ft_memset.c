/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memset.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: khuang <khuang@student.42.fr>                +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/11 17:14:42 by khuang        #+#    #+#                 */
/*   Updated: 2021/10/28 12:38:33 by khuang        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			counter;
	unsigned char	*s_copy;

	counter = 0;
	s_copy = (unsigned char *)s;
	while (counter < n)
	{
		s_copy[counter] = c;
		counter++;
	}
	return (s);
}
