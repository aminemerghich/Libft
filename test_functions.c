
#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char	dest[10];
	size_t	result;

	result = ft_strlcpy(dest, "Bonjour", sizeof(dest));
	printf("Destination : %s\n", dest);
	printf("Longueur source : %zu\n", result);

	result = ft_strlcpy(dest, "ABCDEFGHIJKLM", 5);
	printf("Destination tronquee : %s\n", dest);
	printf("Longueur source : %zu\n", result);

	result = ft_strlcpy(dest, "Salut", 0);
	printf("Taille 0, longueur source : %zu\n", result);
	return (0);
}

