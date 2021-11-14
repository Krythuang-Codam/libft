/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strjoin.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: khuang <khuang@student.42.fr>                +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/14 15:04:19 by khuang        #+#    #+#                 */
/*   Updated: 2021/10/28 12:42:03 by khuang        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*final_string;
	int		counter;
	int		second_counter;

	counter = 0;
	second_counter = 0;
	if (!s1 || !s2)
		return (0);
	final_string = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!final_string)
		return (0);
	while (s1[counter] != '\0')
	{
		final_string[counter] = s1[counter];
		counter++;
	}
	while (s2[second_counter] != '\0')
	{
		final_string[counter] = s2[second_counter];
		counter++;
		second_counter++;
	}
	final_string[counter] = '\0';
	return (final_string);
}
