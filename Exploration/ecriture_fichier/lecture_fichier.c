#include <stdio.h>
#include <stdlib.h>
#define TAILLE_MAX 1000

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
*
*; long ftell(FILE* pointeurSurFichier);
* position actuelle du curseur
*
*; int fseek(FILE* pointeurSurFichier, long deplacement, int origine);
* deplacer curseur par deplacement depuis origine
*
*; void rewind(FILE* pointeurSurFichier);
* renvoyer a la position 0
*
*; int rename(const char* ancienNom, const char* nouveauNom);
* renomer le fichier present
*
*; int remove(const char* fichierASupprimer);
* comme rm -rf !atention!
*/

int main(int argc, char *argv[])
{
    FILE* fichier = NULL;
    char chaine[TAILLE_MAX] = "";

    fichier = fopen("test.txt", "w");

    if (fichier != NULL)
    {
        fgets(chaine, TAILLE_MAX, fichier);
        printf("%s\n", chaine);
        fputs("101 tests", fichier);
        fclose(fichier);
    }

    return 0;
}
