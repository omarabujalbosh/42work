/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabu-jal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 14:02:46 by oabu-jal          #+#    #+#             */
/*   Updated: 2026/09/22 14:17:14 by oabu-jal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
void bzero(void *s, size_t n)
{
	int index;
	unsigned char *ptr;
	ptr = (unsigned char *)s;
	index = 0;
	while (n--)
	{
		ptr[index] = 0;
		index++;
       	}
}
