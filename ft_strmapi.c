/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strmapi.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: khuang <khuang@student.42.fr>                +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/21 12:33:17 by khuang        #+#    #+#                 */
/*   Updated: 2021/10/28 12:42:31 by khuang        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*s_copy;
	int		counter;

	counter = 0;
	if (!s || !f)
		return (0);
	s_copy = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!s_copy)
		return (0);
	while (s[counter] != '\0')
	{
		s_copy[counter] = f(counter, s[counter]);
		counter++;
	}
	s_copy[counter] = '\0';
	return (s_copy);
}
