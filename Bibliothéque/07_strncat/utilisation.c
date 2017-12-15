#include <stdio.h>

char *ft_strncat(char *dest, const char *src, int n);

int      main (int argc, char **argv)
{
    int  valeur;

    printf("même principe qui strcat\nla chaine destination est limité par un int n\n");
    if (argc < 3)
    {
        fprintf (stderr, "Utilisation: %s chaine1 chaine2\n", argv[0]);
        return 0;
    }

    ft_strncat(argv[1], argv[2] , 5);
    printf("exemple avec 5 ; %s\n", argv[1]);

    return 1;
}
