/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabu-jal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 13:43:05 by oabu-jal          #+#    #+#             */
/*   Updated: 2026/09/30 14:53:29 by oabu-jal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*newlst;

	newlst = NULL;
	if (!f || !lst || !del)
		return (NULL);
	while (lst)
	{
		new = malloc(sizeof(t_list));
		if (!new)
		{
			ft_lstclear(&newlst, del);
			return (NULL);
		}
		new->content = f(lst->content);
		if (!(new->content))
		{
			ft_lstclear(&newlst, del);
			return (free(new), NULL);
		}
		new->next = NULL;
		ft_lstadd_back(&newlst, new);
		lst = lst->next;
	}
	return (newlst);
}
