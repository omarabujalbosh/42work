/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabu-jal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 09:35:47 by oabu-jal          #+#    #+#             */
/*   Updated: 2026/09/30 10:04:32 by oabu-jal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_lstsize(t_list *lst)
{
	t_list	*current;
	size_t	i;

	i = 0;
	current = lst;
	while (current)
	{
		current = current->next;
		i++;
	}
	return (i);
}
