/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerghic <amine.merghich@student.42.be>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 16:53:43 by amerghic          #+#    #+#             */
/*   Updated: 2026/10/21 16:56:52 by amerghic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int ft_isdigit(int c)
{
    if (c <= 57 && c >= 48)
        return (1);
    return (0);
}
#include <stdio.h>
int main (void)
{
    printf("%d ", ft_isdigit('d'));
    printf("%d ", ft_isdigit('6'));
    return (0);
}
