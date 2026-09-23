/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabu-jal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/23 11:10:21 by oabu-jal          #+#    #+#             */
/*   Updated: 2026/09/23 14:10:27 by oabu-jal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static void	*ft_copy_backward(char *d, const char *s, size_t n)
{
	while (n > 0)
	{
		n--;
		d[n] = s[n];
	}
	return ((void *)d);
}

static void	*ft_copy_forward(char *d, const char *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return ((void *)d);
}

void	*ft_memmove(void *dist, const void *src, size_t n)
{
	const char	*s;
	char		*d;

	if (!dist && !src)
		return ('\0');
	s = src;
	d = dist;
	if (s == d)
		return (d);
	else if (s < d && d < s + n)
		return (ft_copy_backward(d, s, n));
	else
		return (ft_copy_forward(d, s, n));
}
