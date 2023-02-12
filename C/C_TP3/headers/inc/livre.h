
#ifndef LIVRE_H
#define LIVRE_H

typedef struct
{
    char *nom;
    char *auteur;
    char *maisonEdit;
    char *codeBarre;
}Livre;

void creerLivre(Livre *livre, char *nom, char *auteur, char *maisonEdit, char *codeBarre);

void modifierLivre(Livre *livre, char *attr, char *value);

char* selectionLivre(Livre *livre, char *attr);

void afficherLivre(Livre *livre);

void livre();

#endif /*LIVRE_H*/