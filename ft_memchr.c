/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabu-jal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 13:24:38 by oabu-jal          #+#    #+#             */
/*   Updated: 2026/10/01 13:56:47 by oabu-jal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			index;
	unsigned char	*ch;

	if (!s)
		return (NULL);
	ch = (unsigned char *)s;
	index = 0;
	while (index < n)
	{
		if (ch[index] == (unsigned char)c)
			return (ch + index);
		index++;
	}
	return (NULL);
}
