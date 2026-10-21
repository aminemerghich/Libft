int ft_isalpha(int c)
{
    if ((c <= 90 && c >= 65) || (c <= 122 && c >= 97))
        return (1);
    return (0);
}
/*#include <stdio.h>
int main (void)
{
    printf("%d ", ft_isalpha('d'));
    printf("%d ", ft_isalpha('6'));
    return (0);
}*/
