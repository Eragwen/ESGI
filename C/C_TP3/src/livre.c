#include <livre.h>

struct Livre {
   char  *nom;
   char  *auteur;
   char  *maisonEdit;
   char  *codeBarre;
};

void creerLivre(struct Livre* livre, char* nom, char* auteur, char* maisonEdit, char* codeBarre){
   livre->nom= nom;
   livre->auteur= auteur;
   livre->maisonEdit= maisonEdit;
   livre->codeBarre= codeBarre;
}

void modifierLivre(struct Livre* livre, char* attr, char* value){
   if(strcmp(attr, "nom") == 0){
      strcpy(livre->nom, value);
   }else if(strcmp(attr, "auteur") == 0){
      strcpy(livre->auteur, value);
   }else if (strcmp(attr, "maisonEdit") == 0){
      strcpy(livre->maisonEdit, value);
   }else if (strcmp(attr, "codeBarre") == 0){
      strcpy(livre->codeBarre, value);
   }
}

char* selectionLivre(struct Livre* livre, char* attr){
   if (strcmp(attr, "nom") == 0)
   {
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
      return NULL;
   }    
}

void afficherLivre(struct Livre *livre){
   printf("Le nom : %s\n", livre->nom);
   printf("L'auteur : %s\n", livre->auteur);
   printf("La maison d'edition : %s\n", livre->maisonEdit);
   printf("Le code barre : %s\n", livre->codeBarre);
}

int unLivre(){
   int f = 1;
   char attribut, valeur;
   printf("Commencons par creer un premier livre\n");
   struct Livre livre1;
   creerLivre(&livre1, "Cendrillon", "Joel Pommerat", "Les Ateliers d'ACTES SUD", "023194I328");
   while (f!=0)
   {
      printf("\nVous pouvez maintenant choisir entre 4 choix pour la suite : \n");
      printf("   1- Creation d'un nouveau Livre\n");
      printf("   2- Modification d'un attribut du Livre\n");
      printf("   3- Selection d'un attribut du Livre\n");
      printf("   4- Affichage des informations du Livre\n");
      printf("   0- Pour sortir de ce TP\n");
      scanf("%d", &f);
      switch(f){
         case 0:
            printf("Vous avez choisi de quitter ce TP\n");
            break;
         case 1:
            printf("Vous avez choisi de creer un nouveau Livre\n");
            creerLivre(&livre1, "Alice au pays des merveilles", "Lewis Carrol", "Collection METAMORPHOSE", "023194I329");
            break;
         case 2:
            printf("Vous avez choisi de modifier l'attribut du Livre\n");
            printf("Quel attribut souhaitez-vous modifier ? ");
            scanf("%s", attribut);
            printf("\nQuel valeur souhaitez-vous écrire ? ");
            scanf("%s",valeur);
            modifierLivre(&livre1, &attribut, &valeur);
            break;
         case 3:
            printf("Vous avez choisi de selectionner l'attribut du Livre\n");
            printf("Quel attribut souhaitez-vous consulter ? ");
            scanf("%s", attribut);
            selectionLivre(&livre1, &attribut);
            break;
         case 4:
            printf("Vous avez choisi d'afficher les informations du Livre\n");
            afficherLivre(&livre1);
            break;
      }
   }
   return 0;
}