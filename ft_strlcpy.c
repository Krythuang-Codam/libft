/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: khuang <khuang@student.42.fr>                +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/11 17:14:50 by khuang        #+#    #+#                 */
/*   Updated: 2021/10/25 11:21:59 by khuang        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	counter;

	counter = 0;
	while (counter < size && src[counter] != '\0')
	{
		dst[counter] = src[counter];
		counter++;
	}
	if (counter < size)
	{
		dst[counter] = '\0';
	}
	else if (size != 0)
	{
		dst[counter - 1] = '\0';
	}
	return (ft_strlen(src));
}
