/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcpy.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: khuang <khuang@student.42.fr>                +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/11 17:14:36 by khuang        #+#    #+#                 */
/*   Updated: 2021/10/28 12:37:17 by khuang        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			counter;
	unsigned char	*dest_copy;
	unsigned char	*src_copy;

	counter = 0;
	if (!dest && !src)
		return (0);
	dest_copy = (unsigned char *)dest;
	src_copy = (unsigned char *)src;
	while (counter < n)
	{
		dest_copy[counter] = src_copy[counter];
		counter++;
	}
	return (dest);
}
