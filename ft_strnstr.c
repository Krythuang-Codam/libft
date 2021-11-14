/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strnstr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: khuang <khuang@student.42.fr>                +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/11 11:53:43 by khuang        #+#    #+#                 */
/*   Updated: 2021/10/28 12:46:41 by khuang        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	size_t			counter_one;
	size_t			counter_two;

	counter_one = 0;
	if (needle[counter_one] == '\0')
	{
		return ((char *)haystack);
	}
	while ((haystack[counter_one] != '\0') && (counter_one < n))
	{
		counter_two = 0;
		while ((haystack[counter_one + counter_two] == needle[counter_two])
			&& ((counter_one + counter_two) < n))
		{
			if (needle[counter_two + 1] == '\0')
			{
				return ((char *)haystack + counter_one);
			}
			counter_two++;
		}
		counter_one++;
	}
	return (0);
}
