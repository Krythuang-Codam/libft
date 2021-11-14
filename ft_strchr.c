/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: khuang <khuang@student.42.fr>                +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/11 17:14:46 by khuang        #+#    #+#                 */
/*   Updated: 2021/10/25 11:21:45 by khuang        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	counter;

	counter = 0;
	while (s[counter] != '\0')
	{
		if (s[counter] == (unsigned char)c)
		{
			return ((char *)s + counter);
		}
		counter++;
	}
	if (s[counter] == (unsigned char)c)
	{
		return ((char *)s + counter);
	}
	else
	{
		return (0);
	}
}
