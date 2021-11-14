/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_substr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: khuang <khuang@student.42.fr>                +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/14 15:03:18 by khuang        #+#    #+#                 */
/*   Updated: 2021/10/26 14:50:52 by khuang        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*substring;

	if (s == '\0')
		return (NULL);
	if (ft_strlen(s) < start)
		return (ft_strdup(""));
	if (ft_strlen(s) < len)
		return (ft_strdup(start + s));
	substring = (char *)ft_calloc(len + 1, sizeof(char));
	if (!substring)
		return (NULL);
	if (start >= ft_strlen(s))
		return (substring);
	ft_strlcpy(substring, s + start, len + 1);
	return (substring);
}
