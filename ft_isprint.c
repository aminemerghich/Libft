/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerghic <amine.merghich@student.42.be>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 17:19:38 by amerghic          #+#    #+#             */
/*   Updated: 2026/10/21 17:42:49 by amerghic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}
/*
#include <stdio.h>
int main (void)
{
	printf("%d ", ft_isprint('d'));
	printf("%d ", ft_isprint('6'));
	printf("%d ", ft_isprint('?'));
	printf("%d ", ft_isprint(31));
	return (0);
}*/
