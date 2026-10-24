/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerghic <amine.merghich@student.42.be>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 19:23:44 by amerghic          #+#    #+#             */
/*   Updated: 2026/10/21 19:23:53 by amerghic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		return (c - 32);
	return (c);
}
/*
#include <stdio.h>

int main (void)
{
	printf("%c :",ft_toupper('a'));
	printf("%c :",ft_toupper('A'));
	printf("%c :",ft_toupper('%'));
	return (0);
}*/
