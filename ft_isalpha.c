/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerghic <amine.merghich@student.42.be>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 16:49:27 by amerghic          #+#    #+#             */
/*   Updated: 2026/10/24 02:17:17 by amerghic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if ((c <= 90 && c >= 65) || (c <= 122 && c >= 97))
		return (1);
	return (0);
}
/*
#include <stdio.h>
int main (void)
{
	printf("%d ", ft_isalpha('d'));
	printf("%d ", ft_isalpha('6'));
	return (0);
}*/
