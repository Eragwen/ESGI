#include <string.h>
#include <stdio.h>

#ifndef LIVRE_H
#define LIVRE_H

typedef struct
{
    char *nom;
    char *auteur;
    char *maisonEdit;
    char *codeBarre;
}Livre;

void creerLivre(struct Livre* livre, char *nom, char *auteur, char *maisonEdit, char *codeBarre);

void modifierLivre(struct Livre* livre, char* attr, char* value);

char* selectionLivre(struct Livre* livre, char* attr);

void afficherLivre(struct Livre* livre);

int unLivre();

#endif /*LIVRE_H*/