#include <stdio.h>

char *ft_strcat(char *dest, const char *src);

int      main (int argc, char **argv)
{
    int  valeur;

    printf("fonction qui sert a concatener deux chaines de caractére\nmet a la fin de la chaine source la chaine destination\n");
    if (argc < 3)
    {
        fprintf (stderr, "Utilisation: %s chaine1 chaine2\n", argv[0]);
        return 0;
    }

    ft_strcat(argv[1], argv[2]);
    printf("exemple; %s\n", argv[1]);

    return 1;
}
