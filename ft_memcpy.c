/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabu-jal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 14:19:01 by oabu-jal          #+#    #+#             */
/*   Updated: 2026/09/23 14:53:59 by oabu-jal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	index;
	char	*s;
	char	*d;

	s = src;
	d = dest;
	index = 0;
	while (n--)
	{
		d[index] = s[index];
		index++;
	}
	return (dest);
}
