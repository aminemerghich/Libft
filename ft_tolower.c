/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerghic <amine.merghich@student.42.be>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 19:27:36 by amerghic          #+#    #+#             */
/*   Updated: 2026/10/21 19:29:11 by amerghic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		return (c + 32);
	return (c);
}
/*
#include <stdio.h>

int main (void)
{
	printf("%c :",ft_tolower('B'));
	printf("%c :",ft_tolower('A'));
	printf("%c :",ft_tolower('%'));
	return (0);
}*/
