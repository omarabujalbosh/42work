/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabu-jal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 19:55:49 by oabu-jal          #+#    #+#             */
/*   Updated: 2026/09/28 21:19:24 by oabu-jal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	isinset(char const ch, char const *set)
{
	int	i;
	int	len;

	len = ft_strlen(set);
	i = 0;
	while (i < len)
	{
		if (set[i] == ch)
			return (1);
		i++;
	}
	return (0);
}

static int	countlen(char const *s1, char const *set)
{
	int	len;
	int	i;
	int	fcount;
	int	lcount;

	i = 0;
	fcount = 0;
	lcount = 0;
	len = ft_strlen(s1);
	while (isinset(s1[i], set))
	{
		fcount++;
		i++;
	}
	i = len - 1;
	while (isinset(s1[i], (char *)set))
	{
		lcount++;
		i--;
	}
	len -= (fcount + lcount);
	return (len);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		newlen;
	char	*new;
	int		i;
	int		j;

	j = 0;
	i = 0;
	newlen = countlen(s1, set);
	new = malloc(newlen + 1);
	if (!newlen)
		return (NULL);
	while (isinset(s1[i], set))
		i++;
	while (j < newlen)
	{
		new[j] = s1[i];
		i++;
		j++;
	}
	new[j] = '\0';
	return (new);
}
