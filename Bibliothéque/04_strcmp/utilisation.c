#include <stdio.h>

int ft_strcmp(const char *str1, const char *str2);

int      main (int argc, char **argv)
{
    int  valeur;

    printf("fonction qui sert a comparer 2 chaines de caractére\nretourne une valeur négative ou positive, 0 si chaines parreille\nS'arette quand différence donc chaines pas comparé en entier\n");
    if (argc < 3)
    {
        fprintf (stderr, "Utilisation: %s chaine1 chaine2\n", argv[0]);
        return 0;
    }

    valeur = ft_strcmp(argv[1], argv[2]);

    if (valeur < 0)
        printf ("'%s' est lexicalement plus petite que '%s'.\n", argv[1], argv[2]);
    else if (valeur == 0)
        printf ("'%s' et '%s' sont lexicalement égales.\n", argv[1], argv[2]);
    else
        printf ("'%s' est lexicalement plus grande que '%s'.\n", argv[1], argv[2]);

    return 1;
}
