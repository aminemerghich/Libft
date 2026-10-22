/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerghic <amine.merghich@student.42.be>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 18:10:10 by amerghic          #+#    #+#             */
/*   Updated: 2026/10/22 18:48:10 by amerghic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_move_forward(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*d;
	const unsigned char	*s;

	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}

void	*ft_move_backward(void *dest, const void *src, size_t n)

{
	size_t				i;
	unsigned char		*d;
	const unsigned char	*s;

	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	i = n;
	while (i > 0)
	{
		i--;
		d[i] = s[i];
	}
	return (dest);
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	if (src < dest)
		ft_move_backward(dest, src, n);
	else
		ft_move_forward(dest, src, n);
	return (dest);
}
/*
#include <stdio.h>

int main (void)
{
	char str[30] = "abcdabababab";
	ft_memmove(str +1 , str, 3);
	printf("%c %c %c\n",
	(unsigned char)str[0],
	(unsigned char)str[1],
	(unsigned char)str[2]);
}*/
