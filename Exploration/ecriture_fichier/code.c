#include <stdio.h>
#include <stdlib.h>
#define TAILLE 10000

int main(int argc, char const *argv[])
{
    FILE* fichier = NULL;
    char chaine[TAILLE] = "";
    int taille_fichier;

    fichier = fopen("code.txt", "r+");
    if (fichier == NULL)
    {
        printf("error, fin\n");
    }
    else
    {
        fseek(fichier,0,SEEK_END);
        taille_fichier = ftell(fichier);
        printf("%d\n", taille_fichier);
        rewind(fichier);
        if (taille_fichier == 0)
        {
            fputs("On code", fichier);
            printf("fichier vide\n");
        }
        else
        {
            fseek(fichier, 0, SEEK_END);
            fputs(" et on code", fichier);
            fgets(chaine, TAILLE, fichier);
            printf("%s\n", chaine);
        }
        fclose(fichier);
    }
    return 0;
}
