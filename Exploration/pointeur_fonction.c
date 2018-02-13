#include <stdio.h>

void    fonction_1(void)
{
    printf("oui\n");
}

int fonction_2(int nbr)
{
    return (nbr*nbr);
}

void fonction_3(int n)
{
    printf("fonction 3 avec %d\n", n);
}

void fonction_4(int n)
{
    printf("fonction 4 avec %d\n", n);
}

void fonction_3et4(int n, void (*ptr_fonction)(int))
{
    (*ptr_fonction)(n);
}

int main(int argc, char const *argv[])
{
    int * ptrint; // dois contenir une adresse de variable int
    void * ptrall; // compatible avec tous les pointeurs

    //ptr_fonction_exemple = &(fonction_1); stockera l'adresse de la fonction sur ptr_fonction
    // ou & facultative
    // syntaxe type_de_retour(* nom_pointeur)(liste_arguments)
    void (*ptr_fonction)(void);
    ptr_fonction = fonction_1;
    // pour plusieurs arguments void (*ptr_fonction)(int, char *),
    // pour retour int * (ptr_fonction)(int)
    // recuperer valeur retour; variable = (*ptr_fonction)(int)
    (*ptr_fonction)(); // appel

    int (*ptr_fonction1)(int);
    ptr_fonction1 = fonction_2;
    int carre = (*ptr_fonction1)(5);
    printf("%d\n", carre);

    // tableau de pointeur de fonction; retour(*nom_tableau_pointeur[taille_tableau])(liste_arguments)
    // tableau de pointeur seulement avec les memes prototypes

    // retour pointeur dans une fonction; type_retour_pointee(* fonction_renvoi(arguments_renvoi))(arguments_pointee)
    // typedef; typedef retour (* ptr_fonction)(arguments);

    fonction_3et4(2, fonction_3);
    fonction_3et4(5, fonction_4);
    // fonctionne aussi avec typedef
    return 0;
}
