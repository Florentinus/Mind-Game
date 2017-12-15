#include <stdio.h>

char    *ft_strncpy(char *dest, const char *src, int n);

void     main(void)
{
    char dest[100] = {0};
    printf("%s\n",ft_strncpy(dest, "Cette fonction sert a copier comme strcpy,", 42));
    printf("%s\n",ft_strncpy(dest, "mais permet une longueur maximale a la", 42));
    printf("%s\n",ft_strncpy(dest, "source, avec un nombre en parametre", 42));
    printf("%s\n",ft_strncpy(dest, "et en remplissant le reste de \\0", 42));
    printf("%s\n",ft_strncpy(dest, "mêmes erreurs que strcpy", 42));
}
