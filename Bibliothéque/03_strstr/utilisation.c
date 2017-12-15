#include <stdio.h>

char *ft_strstr(const char *haystack, const char *needle);

int      main (int argc, char **argv)
{
    printf("fonction qui sert a trouver une chaine de caractère dans une aute\n si elle s'y trouve, elle renvoie la 1re occurence dans le chaine originelle\n");
    if (argc < 3)
    {
        fprintf (stderr, "Utilisation: %s chaine-originale chaine-a-trouver\n", argv[0]);
        return 0;
    }
    printf("exemple pour %s ; %s\n", argv[2], ft_strstr(argv[1], argv[2]));
}
