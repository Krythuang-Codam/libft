/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcmp.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: khuang <khuang@student.42.fr>                +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/11 17:14:32 by khuang        #+#    #+#                 */
/*   Updated: 2021/10/28 12:37:02 by khuang        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			counter;
	unsigned char	*s1_copy;
	unsigned char	*s2_copy;

	counter = 0;
	s1_copy = (unsigned char *)s1;
	s2_copy = (unsigned char *)s2;
	while (counter < n)
	{
		if (s1_copy[counter] != s2_copy[counter])
		{
			return (s1_copy[counter] - s2_copy[counter]);
		}
		counter++;
	}
	return (0);
}
