/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstclear_bonus.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: khuang <khuang@student.42.fr>                +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/22 16:04:25 by khuang        #+#    #+#                 */
/*   Updated: 2021/10/26 18:45:16 by khuang        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	if (!lst || !del)
	{
		return ;
	}
	while (*lst)
	{
		temp = (*lst)->next;
		ft_lstdelone(*lst, del);
		(*lst) = temp;
	}
}
