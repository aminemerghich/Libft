/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerghic <amine.merghich@student.42.be>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 17:29:48 by amerghic          #+#    #+#             */
/*   Updated: 2026/10/21 17:31:03 by amerghic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>
size_t ft_strlen(const char *s)
{
    size_t i;
    i = 0;
    while (s[i])
        i++;
    return (i);
}
/*
#include <stdio.h>
int main (void)
{
    char *test = "amine";
    printf("%zu :",ft_strlen(test));
    return (0);
}*/
