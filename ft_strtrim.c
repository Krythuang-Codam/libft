/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strtrim.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: khuang <khuang@student.42.fr>                +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/14 15:21:04 by khuang        #+#    #+#                 */
/*   Updated: 2021/10/28 12:43:51 by khuang        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	check_front(char const *str1, char const *set)
{
	int	counter;

	counter = 0;
	while (str1[counter] != '\0')
	{
		if (!ft_strchr(set, str1[counter]))
			break ;
		counter++;
	}
	return (counter);
}

static	int	check_back(char const *str1, char const *set)
{
	int	counter;

	counter = ft_strlen(str1);
	while (counter > 0)
	{
		if (!ft_strchr(set, str1[counter - 1]))
			break ;
		counter--;
	}
	return (counter);
}

char	*ft_strtrim(char const *str1, char const *set)
{
	int	start;
	int	end;

	if (!str1 || !set)
		return (0);
	start = check_front(str1, set);
	end = check_back(str1, set);
	if (start > end)
		return (ft_strdup(""));
	return (ft_substr(str1, start, (end - start)));
}
