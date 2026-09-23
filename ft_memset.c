/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabu-jal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 13:12:24 by oabu-jal          #+#    #+#             */
/*   Updated: 2026/09/22 14:11:35 by oabu-jal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
void *ft_memset(void *s, int c,size_t n) 
{
       	int index; 
	unsigned char *ptr; 
	
	ptr = (unsigned char *)s; 
	index = 0; 
	while (n--) 
	{ 
		ptr[index] = c; 
		index++; 
	} 
	return (s); 
}
