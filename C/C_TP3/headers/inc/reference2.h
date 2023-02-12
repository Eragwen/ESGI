#ifndef TABLEAU_DOUBLE_H
#define TABLEAU_DOUBLE_H

typedef struct {
    double* a_tab;
    unsigned int a_taille;
} TableauDouble;

typedef TableauDouble* PtrTableauDouble;

void TableauDouble_construire(PtrTableauDouble dd, unsigned int taille);

void TableauDouble_afficher(const PtrTableauDouble dd);

void TableauDouble_modifier(PtrTableauDouble const dd, const unsigned int index, const double valeur);

void TableauDouble_liberer(PtrTableauDouble dd);

double TableauDouble_get(PtrTableauDouble dd, const unsigned int index);

void TableauDouble_set(PtrTableauDouble dd, const unsigned int index, double val);

void C_2();

#endif /* TABLEAU_DOUBLE_H */
