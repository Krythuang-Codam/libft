/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strdup.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: khuang <khuang@student.42.fr>                +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/12 17:51:50 by khuang        #+#    #+#                 */
/*   Updated: 2021/10/28 12:41:45 by khuang        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	length;
	char	*s_copy;
	int		counter;

	length = ft_strlen(s) + 1;
	s_copy = malloc(length);
	counter = 0;
	if (s_copy == 0)
	{
		return (0);
	}
	ft_memcpy(s_copy, s, length);
	return (s_copy);
}
