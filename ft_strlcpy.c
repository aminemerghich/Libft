/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerghic <amine.merghich@student.42.be>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 01:47:25 by amerghic          #+#    #+#             */
/*   Updated: 2026/10/23 02:15:35 by amerghic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

isize_t  ft_strlcpy(char *dst, const char *src, size_t size);
{
    size_t  i;
    size_t  srclen;

    srclen = ft_strlen(src);
    if (srclen == 0)
        return (srclen);
    i = 0;
    while (i < (size - 1) && src[i] != '\0')
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
    return (srclen);

}
