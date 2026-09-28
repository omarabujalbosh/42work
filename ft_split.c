/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabu-jal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 11:44:39 by oabu-jal          #+#    #+#             */
/*   Updated: 2026/09/28 12:22:13 by oabu-jal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	strnum(char const *s, char c)
{
	int	count;

	count = 0;
	while (s[count])
	{
		if (s[count] == c)
			count++;
	}
	if (s[0] != c)
		count++;
	return (count);
}

static int strsublen(char const *s, char c, int index)
{
	int	count;
	int	i;

	i = index
	count = 0;
	while (s[count] != c)
		count++;
	return (count);
}



char	**ft_split(char const *s, char c)
{

}
