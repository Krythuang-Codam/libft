/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: khuang <khuang@student.42.fr>                +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/21 13:36:24 by khuang        #+#    #+#                 */
/*   Updated: 2021/10/28 12:39:51 by khuang        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**free_return_string(char **return_string, int counter)
{
	int	second_counter;

	second_counter = 0;
	while (second_counter < counter)
	{
		free(return_string[second_counter]);
		second_counter++;
	}
	free(return_string);
	return (return_string);
}

static char	*copy_words(char *s, char c)
{
	int		counter;
	int		length;
	char	*word;
	char	*s_position;

	counter = 0;
	length = 0;
	s_position = s;
	while (*s != c && *s)
	{
		length++;
		s++;
	}
	s = s_position;
	word = malloc(sizeof(char) * length + 1);
	if (!word)
		return (0);
	while (counter < length)
	{
		word[counter] = s[counter];
		counter++;
	}
	word[counter] = '\0';
	return (word);
}

static void	write_array(char **return_string, char *s, char c)
{
	int	counter;

	counter = 0;
	while (*s == c && *s)
	{
		s++;
	}
	while (*s)
	{
		return_string[counter] = copy_words(s, c);
		if (!return_string)
		{
			return_string = free_return_string(return_string, counter);
			return ;
		}
		counter++;
		while (*s != c && *s)
		{
			s++;
		}
		while (*s == c && s[0])
		{
			s++;
		}
	}
}

static int	count_words(char *s, char c)
{
	int	counter;
	int	word_counter;

	counter = 0;
	word_counter = 0;
	while (s[counter] == c && s[counter])
	{
		counter++;
	}
	while (s[counter])
	{
		word_counter++;
		while (s[counter] != c && s[counter])
		{
			counter++;
		}
		while (s[counter] == c && s[counter])
		{
			counter++;
		}
	}
	return (word_counter);
}

char	**ft_split(char const *s, char c)
{
	int		num_words;
	char	**return_string;

	if (!s)
		return (NULL);
	num_words = count_words((char *)s, c);
	return_string = malloc(sizeof(char *) * (num_words + 1));
	if (!return_string)
		return (0);
	write_array(return_string, (char *)s, c);
	return_string[num_words] = NULL;
	return (return_string);
}
