/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstnew_bonus.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: khuang <khuang@student.42.fr>                +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/21 21:56:52 by khuang        #+#    #+#                 */
/*   Updated: 2021/10/28 12:36:37 by khuang        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_element;

	new_element = malloc(sizeof(t_list));
	if (!new_element)
	{
		return (0);
	}
	new_element->content = content;
	new_element->next = NULL;
	return (new_element);
}
