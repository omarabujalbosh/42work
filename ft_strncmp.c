/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabu-jal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/19 11:27:33 by oabu-jal          #+#    #+#             */
/*   Updated: 2026/07/25 17:46:16 by oabu-jal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	index;

	index = 0;
	while (n > index)
	{
		if (s1[index] != s2[index] || s1[index] == '\0' || s2[index] == '\0')
			return (s1[index] - s2[index]);
		index++;
	}
	return (0);
}
/*
int	main(void)
{
	char s1[] = "omar";
	char s2[] = "omar";

	printf("%i" , ft_strncmp(s1,s2,10));
}
*/
