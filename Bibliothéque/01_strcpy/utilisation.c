#include <stdio.h>

char    *ft_strcpy(char *dest, const char *src);

void    main(void)
{
    char dest[100] = {0};
    printf("%s\n", ft_strcpy(dest, "Cette fonction sert a copier une chaine de caractére"));
    printf("%s\n", ft_strcpy(dest, "depuis une source a une destination etablie."));
    printf("%s\n", ft_strcpy(dest, "Le dernier octet est la fin d'un char \\0"));
    printf("%s\n", ft_strcpy(dest, "La destination dois avoir autant d'octet que la source,"));
    printf("%s\n", ft_strcpy(dest, "sinon error 6021 abort"));
}
