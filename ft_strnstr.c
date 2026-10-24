/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerghic <amine.merghich@student.42.be>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/24 20:16:31 by amerghic          #+#    #+#             */
/*   Updated: 2026/10/24 20:30:39 by amerghic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	j;
	size_t	s2len;

	s2len = ft_strlen(s2);
	if (s2len == 0)
		return ((char *)s1);
	i = 0;
	while (i < n && s1[i] != '\0')
	{
		j = 0;
		while (j < s2len && i + j < n && s1[i + j] == s2[j])
			j++;
		if (j == s2len)
			return ((char *)(s1 + i));
		i++;
	}
	return (NULL);
}
