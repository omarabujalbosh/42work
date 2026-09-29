/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabu-jal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 11:44:39 by oabu-jal          #+#    #+#             */
/*   Updated: 2026/09/29 17:00:16 by oabu-jal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	strnum(char const *s, char c)
{
	int	count;
	int	i;

	if (!s)
		return (-1);
	count = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
			count++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (count);
}

static int	strsublen(char const *s, char c, int index)
{
	int	count;
	int	i;

	i = index;
	count = 0;
	while (s[i] != c && s[i])
	{
		count++;
		i++;
	}
	return (count);
}

static void	freeall(char **sstr, int strlen)
{
	int	i;

	i = 0;
	while (i < strlen)
	{
		free(sstr[i]);
		i++;
	}
	free(sstr);
}

static int	ddelimiter(char const *str, char c, int j)
{
	int	i;

	i = 0;
	while (str[j] && str[j] == c)
	{
		i++;
		j++;
	}
	return (i);
}
/*
 n[0] = slen
n[1] = i
n[2] = sublen
n[3] = j
*/

char	**ft_split(char const *s, char c)
{
	int		n[4];
	char	**sstr;

	n[1] = 0;
	n[3] = 0;
	n[0] = strnum(s, c);
	sstr = malloc((n[0] + 1) * sizeof(char *));
	if (!sstr || !s)
		return (NULL);
	if (s[0] == c)
		n[3] = ddelimiter(s, c, 0);
	while (n[1] < n[0])
	{
		n[2] = strsublen(s, c, n[3]);
		sstr[n[1]] = ft_substr(s, n[3], n[2]);
		if (!sstr[n[1]++])
		{
			freeall(sstr, --n[1]);
			return (NULL);
		}
		n[3] += n[2] + ddelimiter(s, c, n[3] + n[2]);
	}
	sstr[n[1]] = NULL;
	return (sstr);
}
