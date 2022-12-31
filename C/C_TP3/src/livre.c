#include "../Headers/inc/ProjetExemple/livre.h"

struct Livre {
   char *nom;
   char *auteur;
   char *maisonEdit;
   char *codeBarre;
};

void creerLivre(Livre *livre, char *nom, char *auteur, char *maisonEdit, char *codeBarre){
   livre->nom= nom;
   livre->auteur= auteur;
   livre->maisonEdit= maisonEdit;
   livre->codeBarre= codeBarre;
}

void modifierLivre(Livre *livre, char *attr, char *value){
   if(strcmp(attr, "nom") == 0){
      printf("Modification en cours... \n");
      livre->nom = value;
   }else if(strcmp(attr, "auteur") == 0){
      strcpy(livre->auteur, value);
   }else if (strcmp(attr, "maisonEdit") == 0){
      strcpy(livre->maisonEdit, value);
   }else if (strcmp(attr, "codeBarre") == 0){
      strcpy(livre->codeBarre, value);
   }
}

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

void afficherLivre(Livre *livre){
   printf("Le nom : %s\n", livre->nom);
   printf("L'auteur : %s\n", livre->auteur);
   printf("La maison d'edition : %s\n", livre->maisonEdit);
   printf("Le code barre : %s\n", livre->codeBarre);
}

int unLivre(){
   printf("Commencons par creer un premier livre\n");
   struct Livre *livre1;
   creerLivre(&livre1, "Cendrillon", "Joel Pommerat", "Les Ateliers d'ACTES SUD", "023194I328");
   printf("On affiche maintenant le livre : \n");
   afficherLivre(&livre1);
   printf("Selectionnons un attrubut du livre, on va choisir le nom : \n");
   selectionLivre(&livre1, "nom");
   printf("Modifions maintenant le nom de ce livre \n");
   modifierLivre(&livre1, "nom", "Nouveau Nom");
   printf("On re affiche le livre avec le nouveau nom : \n");
   afficherLivre(&livre1);
   return 0;
}