/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerghic <amine.merghich@student.42.be>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 02:43:20 by amerghic          #+#    #+#             */
/*   Updated: 2026/10/24 15:45:16 by amerghic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	size_dest;
	size_t	size_src;
	size_t	i;
	size_t	j;

	size_dest = 0;
	while (size_dest < size && dst[size_dest] != '\0')
		size_dest++;
	size_src = ft_strlen(src);
	if (size_dest == size)
		return (size + size_src);
	i = size_dest;
	j = 0;
	while (src[j] != '\0' && i < size - 1)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (size_dest + size_src);
}
/*
#include <stdio.h>

int	main(void)
{
	char	str[30] = "Bonjour";
	size_t	result;

	result = ft_strlcat(str, " tout le monde", sizeof(str));
	printf("Resultat : %s\n", str);
	printf("Valeur retournee : %zu\n\n", result);

	char	small[8] = "Bonjour";
	result = ft_strlcat(small, "XYZ", sizeof(small));
	printf("Destination trop petite : %s\n", small);
	printf("Valeur retournee : %zu\n\n", result);

	char	empty[10] = "";
	result = ft_strlcat(empty, "Salut", sizeof(empty));
	printf("Destination vide : %s\n", empty);
	printf("Valeur retournee : %zu\n\n", result);

	result = ft_strlcat(empty, "Test", 0);
	printf("Taille zero, retour : %zu\n", result);
	return (0);
}*/
