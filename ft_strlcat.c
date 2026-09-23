/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabu-jal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/21 14:48:34 by oabu-jal          #+#    #+#             */
/*   Updated: 2026/09/23 17:39:22 by oabu-jal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static size_t	len(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	slen;
	size_t	dlen;
	size_t	i;
	size_t	sum;

	i = 0;
	sum = 0;
	slen = len(src);
	dlen = len(dest);
	if (size <= dlen)
		return (size + slen);
	sum = slen + dlen;
	if (size > dlen)
	{
		while (src[i] != '\0' && dlen < size - 1)
		{
			dest[dlen] = src[i];
			i++;
			dlen++;
		}
		dest[dlen] = '\0';
	}
	return (sum);
}
