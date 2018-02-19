#include <stdio.h>
#include <stdlib.h>

/* prototypes de fonctions
*; FILE* fopen(const char* nomDuFichier, const char* modeOuverture);
* modeOuverture peux prendre; "r" (lecture seule), "w" (ecriture seule) "a" (ajout)
* et "r+", "w+" !dangereux!, "a+"
*
*; int fclose(FILE* pointeurSurFichier);
* renvoie un int 0 si reussi.
*
*; int fputc(int caractere, FILE* pointeurSurFichier);
* ou fputs pour une chaine ou fprintf.
*
*; int fgetc(FILE* pointeurDeFichier);
* ou fgets pour une chaine, ou fscanf.
*/

int main(int argc, char *argv[])
{
    FILE* fichier = NULL;

    fichier = fopen("test.txt", "w");

    if (fichier != NULL)
    {
        printf("\n", fgets(fichier));
        fputs("Test", fichier);
        fclose(fichier);
    }

    return 0;
}
