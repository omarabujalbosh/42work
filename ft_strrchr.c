/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabu-jal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 09:25:48 by oabu-jal          #+#    #+#             */
/*   Updated: 2026/09/24 10:43:09 by oabu-jal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*ch;
	int		i;

	i = ft_strlen(s) - 1;
	while (s[i])
	{
		if (s[i] == c)
		{
			ch = (char *)(s + i);
			return (ch);
		}
		i--;
	}
	return (NULL);
}
