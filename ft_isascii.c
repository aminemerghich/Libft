/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerghic <amine.merghich@student.42.be>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 17:11:53 by amerghic          #+#    #+#             */
/*   Updated: 2026/10/21 17:13:08 by amerghic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int ft_isascii(int c)
{
    if (c >= 0 && c <= 127)
        return (1);
    return (0);
}/*
#include <stdio.h>
int main (void)
{
    printf("%d ", ft_isascii('d'));
    printf("%d ", ft_isascii('6'));
    printf("%d ", ft_isascii('D'));
    printf("%d ", ft_isascii('!'));
    return (0);
}*/
