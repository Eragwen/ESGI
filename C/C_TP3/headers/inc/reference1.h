
#ifndef REFERENCE1_H
#define REFERENCE1_H

typedef double* PtrTabDouble;

void TabDouble_construire(PtrTabDouble* dd, const unsigned taille);

void TabDouble_afficher(PtrTabDouble dd, const unsigned taille);

void TabDouble_modifier(PtrTabDouble const dd, const unsigned taille, const unsigned index, const double valeur);

void TabDouble_liberer(PtrTabDouble* dd);

double TabDouble_get(PtrTabDouble dd, const unsigned taille, const unsigned index);

void TabDouble_set(PtrTabDouble dd, const unsigned taille, const unsigned index, double val);

int C_1();
#endif /*REFERENCE1_H*/