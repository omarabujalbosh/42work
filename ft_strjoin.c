/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabu-jal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 14:19:03 by oabu-jal          #+#    #+#             */
/*   Updated: 2026/09/28 16:51:04 by oabu-jal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s3;
	int		len1;
	int		len2;
	int		i;

	i = 0;
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	s3 = malloc(len1 + len2 + 1);
	while (i < len1)
	{
		s3[i] = s1[i];
		i++;
	}
	while (i < (len2 + len1))
	{
		s3[i] = s2[i - len1];
		i++;
	}
	s3[i] = '\0';
	return (s3);
}
