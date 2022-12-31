#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>

void eqSecondDegre(int a, int b, int c)
{
    float delta, x1, x2;
    delta = b*b - 4*a*c;
    if (delta < 0)
    {
        printf("Pas de solution\n");
    }
    else if (delta == 0)
    {
        x1 = -b/(2*a);
        printf("x1 = x2 = %.2f", x1);
    }
    else
    {
        x1 = (-b + sqrt(delta))/(2*a);
        x2 = (-b - sqrt(delta))/(2*a);
        printf("\nL'equation admet 2 solutions qui sont : \n");
        printf("- x1 = %.2f \n", x1);
        printf("- x2 = %.2f \n", x2);
    }
}


void suite(){
    int n=0;
    float u=2, res=0;
    printf("Entrer n : ");
    scanf("%d", &n);
    printf("Suite de %d : \n", n);
    printf("U0 = %f \n", u);
    for (int i = 1; i <= n; i++)
    {
        res = 0.5 * (u + 2/u);
        if (i%10 == 0)
        {
            printf("U%d = %f \n", i, u);
        }
        u = res;
    }
    printf("Le resultat de U[%d] est %f \n", n, res);
    printf("Cette suite tant vers le resultat positif de la resolution de l'equation x^2 - 2 qui est %f. \n\n", res);
    
}

float fibonacci(int n){
    if (n == 0 || n == 1)
    {
        return n;
    }else
    {
        return fibonacci(n-1) + fibonacci(n-2);
    }
    printf("\n");
}

float nbrOr(){
    float or;
    or = (float)(1+sqrt(5))/2;
    return or;
}

void nbrOrFibonacci(){
    int n, i;
    float or;
    printf("Entrer N : ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        or = fibonacci(i+1) / fibonacci(i);
        if (i == 1 || i%5 == 0)
        {
            printf("O[%d] = %.3f\n", i, or);
        }
        
    }
    
    printf("Le resultat de O[%d] = %.3f\n", n, or);
    printf("Le nombre d'or est %.3f\n", nbrOr());
}

#define NUM_DICE 3
#define TARGET_NUMBERS {1,2,4}

int lancer_de() {
  return rand() % 6 + 1;
}

void lancerDes(int nb_parties) {
    int lancer1[3], lancer2[3], garder[3]; 
    int i, compteur, gagne, nb_couts, nbrgagnes=0, nbrperdues=0;
    float pourcentage_gain;

    // Initialisation du générateur de nombres aléatoires
    srand(time(NULL));

    for (int p = 0; p < nb_parties; p++) {
        compteur=nb_couts=gagne=i=0;
        printf("Partie %d\n", p + 1);

        // Lancer 1 avec 3 dés
        printf("Lancer 1 avec 3 des : ");
        for (int i = 0; i < 3; i++)
        {
            lancer1[i] = lancer_de();
            printf("%d ", lancer1[i]);
        }
        

        // On garde les dés qui ont les valeurs 1, 2, ou 4
        garder[0] = garder[1] = garder[2] = 0;
        int x =0;
        for (int j = 0; j < 3; j++) {
            if ((lancer1[j] == 1 || lancer1[j] == 2 || lancer1[j] == 4) && ((lancer1[j] != garder[0])&&(lancer1[j] != garder[1]))) {
                garder[x] = lancer1[j];
                x++;
            }
        }
        int nb_dice = 3 - x;
        for (int c = 0; c < 3; c++)
        {
            for (int j = 0; j < 1; j++) {
                if (compteur==1){
                    // Lancer 2 avec 1 dé
                    printf("Lancer %d avec 1 de : ", c+1);
                    lancer2[2] = lancer_de();
                    printf(" %d ", lancer2[2]);
                    if ((lancer2[2] == 1 || lancer2[2] == 2 || lancer2[2] == 4) && (lancer2[2] != garder[0] && lancer2[2] != garder[1])) {
                        garder[2] = lancer2[2];
                    }
                }else if (compteur ==2){
                    // Lancer 2 avec 2 dés
                    printf("Lancer %d avec 2 des : ", c+1);
                    lancer2[1] = lancer_de();
                    lancer2[2] = lancer_de();
                    printf("%d %d ", lancer2[1], lancer2[2]);
                    x=1;
                    for (int j = 1; j < 3; j++) {
                        if ((lancer2[j] == 1 || lancer2[j] == 2 || lancer2[j] == 4) && ((lancer2[j] != garder[j-1])&&(lancer2[j] != garder[j-2]))) {
                            garder[x] = lancer2[j];
                            x++;
                        }
                    }
                }else if (compteur == 3){
                    // Lancer 2 avec 3 dés 
                    printf("Lancer %d avec 3 des : ", c+1);
                    lancer2[0] = lancer_de();
                    lancer2[1] = lancer_de();
                    lancer2[2] = lancer_de();
                    printf("%d %d %d ", lancer2[0], lancer2[1], lancer2[2]);
                    x=0;
                    for (int j = 0; j < 3; j++) {
                        if ((lancer2[j] == 1 || lancer2[j] == 2 || lancer2[j] == 4) && ((lancer2[j] != garder[j-1])&&(lancer2[j] != garder[j-2]))) {
                            garder[x] = lancer2[j];
                            x++;
                        }
                    }
                }
            }
            if ((garder[i] == 1 && garder[i+1] == 2 && garder[i+2] == 4) || (garder[i] == 1 && garder[i+1] == 4 && garder[i+2] == 2) || (garder[i] == 2 && garder[i+1] == 1 && garder[i+2] == 4) || (garder[i] == 2 && garder[i+1] == 4 && garder[i+2] == 1) || (garder[i] == 4 && garder[i+1] == 1 && garder[i+2] == 2) || (garder[i] == 4 && garder[i+1] == 2 && garder[i+2] == 1))
            {
                printf("je garde ");
                for (int j = 0; j < 3; j++) {
                    if (garder[j] != 0) {
                        printf("%d", garder[j]);
                        printf(", ");
                    }
                }
                printf("[ ");
                for (int j = 0; j < 3; j++) {
                    if (garder[j] != 0) {
                        printf("%d, ", garder[j]);
                    }
                }
                printf("]\n");
                gagne++;
                break;
            }else if ((garder[i] == 1 && garder[i+1] == 2 && garder[i+2] == 0) || (garder[i] == 1 && garder[i+1] == 4 && garder[i+2] == 0) || (garder[i] == 2 && garder[i+1] == 1 && garder[i+2] == 0) || (garder[i] == 2 && garder[i+1] == 4 && garder[i+2] == 0) || (garder[i] == 4 && garder[i+1] == 1 && garder[i+2] == 0) || (garder[i] == 4 && garder[i+1] == 2 && garder[i+2] == 0))
            {
                printf("je garde ");
                for (int j = 0; j < 3; j++) {
                    if (garder[j] != 0) {
                        printf("%d", garder[j]);
                        printf(", ");
                    }
                }
                printf("[ ");
                for (int j = 0; j < 3; j++) {
                    if (garder[j] != 0) {
                        printf("%d, ", garder[j]);
                    }
                }
                printf("]\n");
                compteur =1;         

            }else if ((garder[i] == 1 && garder[i+1] == 0 && garder[i+2] == 0) || (garder[i] == 2 && garder[i+1] == 0 && garder[i+2] == 0) || (garder[i] == 4 && garder[i+1] == 0 && garder[i+2] == 0))
            {
                printf("je garde ");
                for (int j = 0; j < 3; j++) {
                    if (garder[j] != 0) {
                        printf("%d ", garder[j]);
                    }
                }
                printf("[ ");
                for (int j = 0; j < 3; j++) {
                    if (garder[j] != 0) {
                        printf("%d ", garder[j]);
                    }
                }
                printf("]\n");
                compteur =2;

            }else 
            {
                printf("je ne garde rien\n");
                compteur=3;
            }
            nb_couts++;
        }
        if(gagne==1){
            nbrgagnes++;
            if(nb_couts >0){
                printf("Partie %d gagnee en %d coups\n", p+1, nb_couts+1);
            }else{
                printf("Partie %d gagnee en %d coup\n", p+1, nb_couts+1);
            }
        }else{
            printf("Partie %d Perdue\n", p+1);
            nbrperdues++;
        }
        printf("\n");
    }
    pourcentage_gain = (float)nbrgagnes/nb_parties*100;
    if(nbrgagnes>1 && nbrperdues>1){
        printf("Vous avez joue %d parties, %d gagnees pour %d perdues soit %.2f%% de gain\n", nb_parties, nbrgagnes, nbrperdues, pourcentage_gain);
    }else if(nbrgagnes>1){
        printf("Vous avez joue %d parties, %d gagnees pour %d perdue soit %.2f%% de gain\n", nb_parties, nbrgagnes, nbrperdues, pourcentage_gain);
    }else if (nbrperdues>1){
        printf("Vous avez joue %d parties, %d gagnee pour %d perdues soit %.2f%% de gain\n", nb_parties, nbrgagnes, nbrperdues, pourcentage_gain);
    }else{
        printf("Vous avez joue %d parties, %d gagnee pour %d perdue soit %.2f%% de gain\n", nb_parties, nbrgagnes, nbrperdues, pourcentage_gain);
    }
}

int main (){
    int tp =1;    // tp = numéro du TP
    while(tp!=0){   // Boucle pour choisir le TP a afficher
        printf("Bienvenue dans le programme de TP 2\n" );
        printf("Vous allez pouvoir choisir le TP a tester, ci-dessous une liste :\n" );
        printf("1 - TP2.1 | Resoudre une equation du second degre \n" );
        printf("2 - TP2.2 | Programmer une suite \n" );
        printf("3 - TP2.3 | Fibonacci \n" );
        printf("4 - TP2.4 | Le nombre d'or & Fibonacci \n" );
        printf("5 - TP2.5 | 421 \n" );
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
                printf("Vous avez choisi le TP2.1\n" );
                printf("Resoudre l'equation du second degre : Ax^2+Bx+C = 0\n" );
                printf("Entrer A : " );
                scanf("%d", &a);
                printf("\nEntrer B : " );
                scanf("%d", &b);
                printf("\nEntrer C : " );
                scanf("%d", &c);
                eqSecondDegre(a,b,c);
                break;
            case 2:
                printf("Vous avez choisi le TP2.2\n" );
                suite();
                break;
            case 3:
                printf("Vous avez choisi le TP2.3\n" );
                int n = 0;
                printf("Entrer n : ");
                scanf("%d", &n);

                printf("Fibonacci de %d est %.0f : F[%d] = %.0f\n", n, fibonacci(n), n, fibonacci(n));
                break;
            case 4:
                printf("Vous avez choisi le TP2.4\n");
                nbrOrFibonacci();
                break;
            case 5:
                printf("Vous avez choisi le TP2.5\n" );
                unsigned int nbrPartie;
                printf("Combien de parties voulez vous jouer : " );
                scanf("%d", &nbrPartie);
                printf("\n");
                lancerDes(nbrPartie);
                break;
            default:
                printf("Erreur, veuillez rentrer un nombre entre 0 et 5 \n");
                break;
        }
    }

    return 0;
}