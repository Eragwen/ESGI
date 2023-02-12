#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "../headers/inc/reference1.h"
#include "../headers/inc/reference2.h"
#include "../headers/inc/livre.h"

// Définition d'un type pointeur vers un tableau de doubles
typedef double* PtrTabDouble;

// Construit un tableau de doubles de la taille spécifiée
void TabDouble_construire(PtrTabDouble* dd, const unsigned taille) {
    // Alloue de la mémoire pour le tableau de doubles
    *dd = (double*) malloc(taille * sizeof(double));
}

// Affiche les éléments d'un tableau de doubles de la taille spécifiée
void TabDouble_afficher (const PtrTabDouble dd, const unsigned taille) {
    // Parcourt le tableau et affiche chaque élément
    for (unsigned i = 0; i < taille; i++) {
        printf("%f ", dd[i]);
    }
    printf("\n");
}

// Modifie l'élément d'un tableau de doubles de la taille spécifiée à l'index spécifié avec la valeur spécifiée
void TabDouble_modifier (PtrTabDouble const dd, const unsigned taille, const unsigned index, const double valeur) {
    // Vérifie que l'index est valide
    if (index < taille) {
        // Modifie l'élément du tableau à l'index spécifié avec la valeur spécifiée
        dd[index] = valeur;
    }
}

// Libère la mémoire allouée pour un tableau de doubles
void TabDouble_liberer (PtrTabDouble* dd) {
    // Libère la mémoire allouée pour le tableau de doubles
    free(dd);
    *dd = NULL; // Défini à NULL après la libération de la mémoire
}

// Retourne l'élément d'un tableau de doubles de la taille spécifiée à l'index spécifié
double TabDouble_get(PtrTabDouble dd, const unsigned taille, const unsigned index) {
    // Vérifie que l'index est valide
    if (index < taille) {
        // Retourne l'élément du tableau à l'index spécifié
        return dd[index];
    }
    // Retourne 0 si l'index est invalide
    return 0;
}

// Modifie l'élément d'un tableau de doubles de la taille spécifiée à l'index spécifié avec la valeur spécifiée
void TabDouble_set(PtrTabDouble dd, const unsigned taille, const unsigned index, double val) {
    // Vérifie que l'index est valide
    if (index < taille) {
        // Modifie l'élément du tableau à l'index spécifié avec la valeur spécifiée
        dd[index] = val;
    }
}

int C_1() {
    PtrTabDouble d1 = NULL; // Défini à NULL avant l'allocation de la mémoire
    unsigned t1 = 5;
    TabDouble_construire(&d1, t1);  // Alloue de la mémoire pour le tableau de doubles
    TabDouble_afficher(d1, t1); // Affiche les éléments du tableau de doubles
    TabDouble_modifier(d1, t1, 2, 3.13589985);  // Modifie l'élément du tableau de doubles à l'index 2 avec la valeur 3.13589985
    TabDouble_afficher(d1, t1); // Affiche les éléments du tableau de doubles
    printf("%f\n", TabDouble_get(d1, t1, 2));   // Affiche l'élément du tableau de doubles à l'index 2
    TabDouble_set(d1, t1, 2, 62.1); // Modifie l'élément du tableau de doubles à l'index 2 avec la valeur 62.1
    printf("%f\n", TabDouble_get(d1, t1, 2));   // Affiche l'élément du tableau de doubles à l'index 2
    TabDouble_afficher(d1, t1); // Affiche les éléments du tableau de doubles
    TabDouble_liberer(d1);  // Libère la mémoire allouée pour le tableau de doubles
    d1 = NULL; // Défini à NULL après la libération de la mémoire
    TabDouble_afficher(d1, t1); // Affiche les éléments du tableau de doubles
    printf("\n"); 
    return 0;
}


// Structure représentant un tableau de nombres flottants en double précision
struct TableauDouble {
    double* a_tab;          // pointeur vers le tableau de nombres flottants
    unsigned int a_taille;  // taille du tableau
};

// Définir un alias pour un pointeur vers un TableauDouble
typedef TableauDouble* PtrTableauDouble;

// Fonction pour initialiser un TableauDouble
void TableauDouble_construire(PtrTableauDouble dd, unsigned int taille) {
    dd->a_tab = (double*) malloc(taille * sizeof(double));  // allouer de la mémoire pour le tableau
    dd->a_taille = taille;  // définir la taille du tableau
}

// Fonction pour afficher les éléments d'un TableauDouble
void TableauDouble_afficher(const PtrTableauDouble dd) {
    printf("TableauDouble : ");
    for (unsigned int i = 0; i < dd->a_taille; i++) {
        printf("%f ", dd->a_tab[i]);  // afficher chaque élément du tableau
    }
    printf("\n");
}

// Fonction pour modifier un élément du TableauDouble à l'index donné
void TableauDouble_modifier(PtrTableauDouble const dd, const unsigned int index, const double valeur) {
    if (index < dd->a_taille) {
        dd->a_tab[index] = valeur;  // modifier l'élément si l'index est valide
    }
}

// Fonction pour libérer la mémoire allouée pour un TableauDouble
void TableauDouble_liberer(PtrTableauDouble dd) {
    free(dd->a_tab);  // libérer la mémoire allouée pour le tableau
    dd->a_tab = NULL;  // définir le pointeur vers le tableau à NULL
    dd->a_taille = 0;  // définir la taille du tableau à 0
}

// Fonction pour récupérer un élément du TableauDouble à l'index donné
double TableauDouble_get(PtrTableauDouble dd, const unsigned int index) {
    if (index < dd->a_taille) {
        return dd->a_tab[index];  // retourner l'élément si l'index est valide
    } else {
        return 0.0;  // retourner 0 si l'index est invalide
    }
}

// Fonction pour modifier un élément du TableauDouble à l'index donné
void TableauDouble_set(PtrTableauDouble dd, const unsigned int index, double val) {
    if (index < dd->a_taille) {
        dd->a_tab[index] = val;  // modifier l'élément si l'index est valide
    }
}

// Fonction principale pour tester le TableauDouble
void C_2() {
    PtrTableauDouble d1 = (PtrTableauDouble) malloc(sizeof(TableauDouble));  // allouer de la mémoire pour le pointeur de TableauDouble
    unsigned int t1 = 5;  // définir la taille du tableau
    TableauDouble_construire(d1, t1);  // initialiser le TableauDouble
    TableauDouble_afficher(d1);  // afficher le TableauDouble
    TableauDouble_modifier(d1, 2, 3.13589985);  // modifier un élément du TableauDouble
    TableauDouble_afficher(d1); // afficher le TableauDouble
    printf("%f\n", TableauDouble_get(d1, 2));   // afficher un élément du TableauDouble
    TableauDouble_set(d1, 2, 62.1); // modifier un élément du TableauDouble
    printf("%f\n", TableauDouble_get(d1, 2));  // afficher un élément du TableauDouble
    TableauDouble_afficher(d1); // afficher le TableauDouble
    TableauDouble_liberer(d1);  // libérer la mémoire allouée pour le TableauDouble
    TableauDouble_afficher(d1); // afficher le TableauDouble
    free(d1);   // libérer la mémoire allouée pour le pointeur de TableauDouble
    printf("\n");
}

// Definition de la structure d'un Livre
struct Livre {
   char *nom;
   char *auteur;
   char *maisonEdit;
   char *codeBarre;
};
// Fonction pour créer un Livre
void creerLivre(Livre *livre, char *nom, char *auteur, char *maisonEdit, char *codeBarre){
   livre->nom= nom;
   livre->auteur= auteur;
   livre->maisonEdit= maisonEdit;
   livre->codeBarre= codeBarre;
}
// Fonction pour modifier un attribut d'un Livre
void modifierLivre(Livre *livre, char *attr, char *value){
    // Comparaison des attributs
    // STRCMP compare deux chaines et retourne 0 si les deux chaines sont identiques
   if(strcmp(attr, "nom") == 0){
      printf("Modification en cours... \n");
      livre->nom = value;
   }else if(strcmp(attr, "auteur") == 0){
      printf("Modification en cours... \n");
      livre->auteur = value;
   }else if (strcmp(attr, "maisonEdit") == 0){
      printf("Modification en cours... \n");
      livre->maisonEdit = value;
   }else if (strcmp(attr, "codeBarre") == 0){
      printf("Modification en cours... \n");
      livre->codeBarre = value;
   }
}
// Fonction pour selectionner un attribut d'un Livre
char *selectionLivre(Livre *livre, char *attr){
   if (strcmp(attr, "nom")==0)
   {
      printf("Le nom : %s\n",livre->nom);
      return livre->nom;
   }else if (strcmp(attr, "auteur") == 0)
   {
      return livre->auteur;
   }else if (strcmp(attr, "maisonEdit") == 0)
   {
      return livre->maisonEdit;
   }else if (strcmp(attr, "codeBarre") == 0)
   {
      return livre->codeBarre;
   }else{
      printf("Invalid");
      return NULL;
   }    
}
// Fonction pour afficher un Livre
void afficherLivre(Livre *livre){
   printf("Le nom : %s\n", livre->nom);
   printf("L'auteur : %s\n", livre->auteur);
   printf("La maison d'edition : %s\n", livre->maisonEdit);
   printf("Le code barre : %s\n", livre->codeBarre);
}
// Fonction pour tester la structure Livre
void livre(){
   // Affiche un message pour indiquer que nous allons créer un livre
   printf("Commencons par creer un premier livre\n");
   // Déclare un pointeur vers un Livre et appelle creerLivre() pour initialiser le livre1 avec les informations
   struct Livre *livre1;
   creerLivre(&livre1, "Cendrillon", "Joel Pommerat", "Les Ateliers d'ACTES SUD", "023194I328");
   // Affiche le livre1 nouvellement créé
   printf("\n");
   printf("On affiche maintenant le livre : \n");
   afficherLivre(&livre1);
   // Sélectionne un attribut du livre1, en choisissant le nom, et affiche le nom
   printf("\n");
   printf("Selectionnons un attrubut du livre, on va choisir le nom : \n");
   selectionLivre(&livre1, "nom");
   // Modifie le nom du livre1 et affiche-le à nouveau
   printf("\n");
   printf("Modifions maintenant le nom de ce livre \n");
   modifierLivre(&livre1, "nom", "Nouveau Nom");
   printf("On re affiche le livre avec le nouveau nom : \n");
   afficherLivre(&livre1);
}


int main(){
   int tp =1;    // tp = numéro du TP
   while(tp!=0){   // Boucle pour choisir le TP a afficher
         printf("Bienvenue dans le programme de TP 3\n" );
         printf("Vous allez pouvoir choisir le TP a tester, ci-dessous une liste :\n" );
         printf("1 - TP3.1 | Reference/Pointeur \n" );
         printf("2 - TP3.2 | Reference/Pointeur & Structure \n" );
         printf("3 - TP3.3 | Un Livre \n" );
         printf("0 - Pour sortir du programme\n");
         printf("\nEntrez le numero du TP a tester : " );
         scanf("%d", &tp);
         switch (tp)
         {
            case 0:
               printf("Vous avez choisi de sortir du programme.\n");
               break;
            case 1:
               printf("Vous avez choisi le TP3.1\n" );
               C_1();
               break;
            case 2:
               printf("Vous avez choisi le TP3.2\n" );
               C_2();
               break;
            case 3:
               printf("Vous avez choisi le TP3.3\n" );
               livre();
               break;
            default:
               printf("Erreur, veuillez rentrer un nombre entre 0 et 3 \n");
               break;
         }
      }

   return 0;
}
 