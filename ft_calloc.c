/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerghic <amine.merghich@student.42.be>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/24 21:34:28 by amerghic          #+#    #+#             */
/*   Updated: 2026/11/01 18:01:41 by amerghic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*r;

	if (nmemb != 0 && size > SIZE_MAX / nmemb)
		return (NULL);
	r = malloc(nmemb * size);
	if (!r)
		return (NULL);
	ft_bzero(r, nmemb * size);
	return (r);
}
