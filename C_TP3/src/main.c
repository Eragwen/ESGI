#include <referencePointeur.h>
#include <livre.h>

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
               unsigned int a,b,c;
               printf("Vous avez choisi le TP3.1\n" );
               break;
            case 2:
               printf("Vous avez choisi le TP3.2\n" );
               break;
            case 3:
               printf("Vous avez choisi le TP3.3\n" );
               unLivre();
               break;
            default:
               printf("Erreur, veuillez rentrer un nombre entre 1 et 5 \n");
               break;
         }
      }

   return 0;
}
 