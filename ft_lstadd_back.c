/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabu-jal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 13:57:01 by oabu-jal          #+#    #+#             */
/*   Updated: 2026/09/30 15:25:02 by oabu-jal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*pre;

	if (!lst || !new)
		return ;
	if (!*lst)
	{
		*lst = new;
		new->next = NULL;
		return ;
	}
	pre = ft_lstlast(*lst);
	pre->next = new;
	new->next = NULL;
}
