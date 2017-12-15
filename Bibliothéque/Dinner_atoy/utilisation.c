#include <stdio.h>
#include <stdlib.h>

int ft_atoi(const char *str);

int main (int argc, char** argv)
{
    printf("atoi prend une chaine de caractére, et crée un int a partir de cette chaine\nles nombres négatifs pris des qu'il y a un char \"-\"\n");
    if (argc <= 1)
    {
        fprintf (stderr, "Utilisation: %s nombre\n", argv[0]);
        return 0;
    }
    printf("exemple avec %s; %d\n", argv[1], ft_atoi(argv[1]));
    return(1);
}
