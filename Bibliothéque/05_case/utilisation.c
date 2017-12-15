#include <stdio.h>

char    *ft_case(char *str, int type);

int     main(int argc, char **argv)
{
    if (argc < 2)
    {
        fprintf (stderr, "metre en majuscule, minuscule, capitaliser\nUtilisation: %s chaine\n", argv[0]);
        return 0;
    }
    printf("si \"m\", mettre en majuscule\nexemple ;%s\n", ft_case(argv[1], 'm'));
    printf("si \"l\", mettre en minuscule\nexemple ;%s\n", ft_case(argv[1], 'l'));
    printf("si \"c\", capitaliser le texte, mettre la premiére des lettres des mots (caractére alpha-numérique)\nexemple ;%s\n", ft_case(argv[1], 'c'));
    return 1;
}
