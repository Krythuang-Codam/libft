/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: khuang <khuang@student.42.fr>                +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/11 17:13:24 by khuang        #+#    #+#                 */
/*   Updated: 2021/10/28 12:42:18 by khuang        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dest_length;
	size_t	src_length;
	size_t	i;

	dest_length = ft_strlen(dst);
	src_length = ft_strlen(src);
	i = 0;
	if (size <= dest_length)
	{
		return (src_length + size);
	}
	while (src[i] != '\0' && (dest_length + i) < (size - 1))
	{
		dst[dest_length + i] = src[i];
		i++;
	}
	dst[dest_length + i] = '\0';
	return (src_length + dest_length);
}
