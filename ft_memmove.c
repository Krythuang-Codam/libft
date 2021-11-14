/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memmove.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: khuang <khuang@student.42.fr>                +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/11 17:14:39 by khuang        #+#    #+#                 */
/*   Updated: 2021/10/28 12:38:23 by khuang        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	*part_two(void *dest, const void *src, size_t n)
{
	size_t			counter;
	unsigned char	*dest_copy;
	unsigned char	*src_copy;

	dest_copy = (unsigned char *)dest;
	src_copy = (unsigned char *) src;
	counter = 0;
	while (n > 0)
	{
		dest_copy[n - 1] = src_copy[n - 1];
		n--;
	}
	return (dest);
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			counter;
	unsigned char	*dest_copy;
	unsigned char	*src_copy;

	dest_copy = (unsigned char *)dest;
	src_copy = (unsigned char *)src;
	counter = 0;
	if (!dest && !src)
		return (0);
	if (dest_copy > src_copy)
	{
		part_two(dest, src, n);
	}
	else
	{
		while (counter < n)
		{
			dest_copy[counter] = src_copy[counter];
			counter++;
		}
	}
	return (dest);
}
