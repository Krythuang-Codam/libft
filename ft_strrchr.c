/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strrchr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: khuang <khuang@student.42.fr>                +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/11 17:15:01 by khuang        #+#    #+#                 */
/*   Updated: 2021/10/25 11:22:13 by khuang        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	counter;

	counter = 0;
	while (s[counter] != '\0')
	{
		counter++;
	}
	while (counter >= 0)
	{
		if (s[counter] == (unsigned char)c)
		{
			return ((char *)s + counter);
		}
		counter--;
	}
	return (0);
}
