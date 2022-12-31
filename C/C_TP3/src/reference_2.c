#include <stdio.h>
#include <stdlib.h>

typedef struct {
    double* a_tab;
    unsigned int a_taille;
} TableauDouble;

typedef TableauDouble* PtrTableauDouble;

void TableauDouble_construire(PtrTableauDouble dd,unsigned taille) {

}
void TableauDouble_afficher (const PtrTableauDouble dd) { 

}
void TableauDouble_modifier (PtrTableauDouble const dd, const unsigned index, const double valeur) { 

}
void TableauDouble_liberer (PtrTableauDouble dd) { 

}
double TableauDouble_get(PtrTableauDouble dd, const unsigned index) { 

}
void TableauDouble_set(PtrTableauDouble dd,  const unsigned index, double val)  { 

}

void C_2() {
    PtrTableauDouble d1 = NULL;
    unsigned t1=5;
    TableauDouble_construire(d1,t1);
    TableauDouble_afficher(d1);
    TableauDouble_modifier(d1,2, 3.13589985);
    TableauDouble_afficher(d1);
    printf("%5.10f\n",TableauDouble_get(d1,2));
    TableauDouble_set(d1,2,62.1);
    printf("%5.10f\n",TableauDouble_get(d1,2));
    TableauDouble_afficher(d1);
    TableauDouble_liberer(d1);
    TableauDouble_afficher(d1);
}