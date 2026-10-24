/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerghic <amine.merghich@student.42.be>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 20:14:01 by amerghic          #+#    #+#             */
/*   Updated: 2026/10/23 02:56:07 by amerghic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*helper;

	i = 0;
	helper = (unsigned char *)s;
	while (i < n)
	{
		helper[i] = c;
		i++;
	}
	return (s);
}
/*
#include <stdio.h>

int main (void)
{
	char str[30] = "abcdabababab";
	ft_memset(str, 'x', 3);
	printf("%s\n", str);
	return (0);
}*/
