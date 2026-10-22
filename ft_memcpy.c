/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerghic <amine.merghich@student.42.be>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 01:07:28 by amerghic          #+#    #+#             */
/*   Updated: 2026/10/22 19:04:42 by amerghic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*dest_p;
	const unsigned char	*src_p;

	if (!dest && !src)
		return (0);
	if ((n == 0) || (dest == src))
		return (dest);
	i = 0;
	dest_p = (unsigned char *)dest;
	src_p = (const unsigned char *)src;
	while (i < n)
	{
		dest_p[i] = src_p[i];
		i++;
	}
	return (dest);
}
/*
#include <stdio.h>

int main (void)
{
	char src[5] = "amine";
	char dest[5];
	ft_memcpy(dest,src, 2);
	printf("%c %c", dest[0], dest[1]);
	return (0);
}*/
