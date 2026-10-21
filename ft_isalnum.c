/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerghic <amine.merghich@student.42.be>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 17:07:04 by amerghic          #+#    #+#             */
/*   Updated: 2026/10/21 17:07:07 by amerghic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isalnum(int c)
{
    if ((c <= 57 && c >= 48) || (c >= 65 && c <= 90) || (c >= 97 && c <= 122))
        return (1);
    return (0);
}/*
#include <stdio.h>
int main (void)
{
    printf("%d ", ft_isalnum('d'));
    printf("%d ", ft_isalnum('6'));
    printf("%d ", ft_isalnum('D'));
    printf("%d ", ft_isalnum('!'));
    return (0);
}*/
