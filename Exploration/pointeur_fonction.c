#include <stdio.h>

void    fonction_1(void)
{
    printf("oui\n");
}

int fonction_2(int nbr)
{
    return (nbr*nbr);
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
    return 0;
}
