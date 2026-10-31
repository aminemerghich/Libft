/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerghic <amine.merghich@student.42.be>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 00:36:54 by amerghic          #+#    #+#             */
/*   Updated: 2026/10/31 13:56:11 by amerghic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*helper;

	i = 0;
	helper = (unsigned char *)s;
	while (i < n)
	{
		helper[i] = 0;
		i++;
	}
}
/*
#include <stdio.h>

int main (void)
{
	char str[30] = "abcdabababab";
	ft_bzero(str, 3);
	printf("%d %d %d\n",
	(unsigned char)str[0],
	(unsigned char)str[1],
	(unsigned char)str[2]);
	return (0);
}*/
