/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabu-jal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/26 16:41:57 by oabu-jal          #+#    #+#             */
/*   Updated: 2026/09/26 18:14:08 by oabu-jal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	ft_isspace(char c)
{
	if (c == ' ' || c == '\t' || c == '\n' || c == '\f' || c == '\r' || c == '\v')
		return (1);
	else 
		return (0);
}

int	ft_atoi(const char *nptr)
{
	int	isn;
	int	result;
	int	i;

	result = 0;
	i = 0;
	isn = 0;
	while	(ft_isspace(nptr[i]))
		i++;
	if (nptr[i] == '-')
	{
		isn = 1;
		i++;
	}
	else if (nptr[i] == '+')
	{
		isn = 0;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		result = result * 10 + (nptr[i] - '0');
		i++;
	}
	if (isn)
		result *= -1;
	return (result);
}

int	main()
{
	const char	*s = "     \v\r123dg";
	printf("%i" , ft_atoi(s));
}
