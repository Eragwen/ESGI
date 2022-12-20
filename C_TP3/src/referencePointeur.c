#include <string.h>
#include <stdio.h>
#include <stdlib.h>

typedef double* PtrTableauDouble;

void TableauDouble_construire(PtrTableauDouble *dd, const unsigned taille){
    *dd = malloc(taille * sizeof(double));
}

void TableauDouble_afficher(PtrTableauDouble *dd, const unsigned taille){
    for(unsigned i = 0; i < taille; i++){
        printf("%5.10f ", (*dd)[i]);
    }
    printf("\n");
}

void TableauDouble_modifier(PtrTableauDouble const *dd, const unsigned taille, const unsigned index, const double valeur){
    (*dd)[index] = valeur;
}

void TableauDouble_liberer(PtrTableauDouble *dd){
    free(*dd);
}

double TableauDouble_get(PtrTableauDouble *dd, const unsigned taille, const unsigned index){
    return (*dd)[index];
}

void TableauDouble_set(PtrTableauDouble *dd, const unsigned taille, const unsigned index, double val){
    (*dd)[index] = val;
}

int C_1(){
    PtrTableauDouble d1 = NULL;
    unsigned t1 = 5;
    TableauDouble_construire(&d1, t1);
    TableauDouble_afficher(&d1, t1);
    TableauDouble_modifier(&d1, t1, 2, 3.13589985);
    TableauDouble_afficher(&d1, t1);
    printf("%5.10f\n", TableauDouble_get(&d1, t1, 2));
    TableauDouble_set(&d1, t1, 2, 62.1);
    printf("%5.10f\n", TableauDouble_get(&d1, t1, 2));
    TableauDouble_afficher(&d1, t1);
    TableauDouble_liberer(&d1);
    TableauDouble_afficher(&d1, t1);
    return 0;
}

int main(){return C_1();}