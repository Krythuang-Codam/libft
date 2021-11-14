/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstmap_bonus.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: khuang <khuang@student.42.fr>                +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/22 16:34:39 by khuang        #+#    #+#                 */
/*   Updated: 2021/10/28 12:56:38 by khuang        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_element;

	new_element = NULL;
	if (!lst || !f)
		return (new_element);
	while (lst)
	{
		new_list = ft_lstnew(f(lst->content));
		if (new_list)
			ft_lstadd_back(&new_element, new_list);
		else
		{
			ft_lstclear(&new_element, del);
			return (NULL);
		}
		lst = lst->next;
	}
	return (new_element);
}
