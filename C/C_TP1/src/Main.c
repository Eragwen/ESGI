#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define _PI 3.1415927

void polygone(int c, int n)
{
    float aire;
    aire = (n * (c*c)) / (4 * tan(_PI/n));  // Calcul de l'aire d'un polygone
    printf("L'aire du polygone est de %f m \n", aire );
    printf("Fin du programme.\n\n");
}

void sommeMultiplicity()
{
    int n=1;
    printf("Entrez une valeur superieur a 0 : ");
    scanf("%d", &n);

    if(n<0){
        printf("Erreur : La valeur doit etre superieur a 0 \n");

    }else{
        int somme = 0, factorielle = 1;
        int tab[100];   // Tableau de 100 entiers
        for (int i = 1; i <= n; i++)    // Boucle pour calculer la somme des entiers rentr�s par l'utilisateur
        {
            tab[i] = i;
            printf("%d + " ,tab[i]);    // Affichage de la somme des entiers
            somme += tab[i];
        }
        printf(" = %d\n", somme);
        for (int i = 1; i <= n; i++)    // Boucle pour calculer la factorielle des entiers rentr�s par l'utilisateur
        {
            tab[i] = i;
            printf("%d * " ,tab[i]);    // Affichage de la factorielle
            factorielle *= tab[i];
        }
        printf(" = !%d \n", factorielle );
    }

    printf("Fin du programme.\n\n");
}

void plusGrand()
{
    int tab[20];    // Tableau de 20 entiers
    int n =0, max=0, num=0, t=0;    // n = nombre d'entiers a rentrer par l'utilisateur, max = nombre le plus grand, num = num�ro de l'entier le plus grand, t = nombre de l'entier rentr� par l'utilisateur
    printf("Entrez un nombre de valeurs a entrer : " );// Demande a l'utilisateur de rentrer un nombre d'entiers
    scanf("%d", &n);    // r�cup�re l'entier rentr� par l'utilisateur
    for (int i = 0; i < n; i++) // Boucle pour rentrer les entiers
    {
        t = i + 1;
        printf("Entrez la valeur numero %d : ", t );
        scanf("%d", &tab[i]);   // Demande a l'utilisateur de rentrer un entier
        if (tab[i] > max)   // Si l'entier est plus grand que le nombre le plus grand, alors le nombre le plus grand devient l'entier
        {
            max = tab[i];
            num = i+1;
        }
    }
    printf("Le plus grand nombre est %d \n", max );
    printf("C'etait le nombre numero : %d \n", num );
    printf("Fin du programme.\n\n");
}

void suite()
{
    int n =1;  // n = nombre d'entiers a rentrer par l'utilisateur
    float res;  // res = r�sultat de la suite
    while (n!=0){       // Boucle pour rentrer et tester les diff�rentes suites
        printf("Entrez le nombre de terme de la suite a calculer n avec n > 0 (0 pour terminer) : ");   // Demande a l'utilisateur de rentrer un entier
        scanf("%d", &n);    // r�cup�re l'entier rentr� par l'utilisateur
        if (n<0)    // Si l'entier est n�gatif, alors on affiche un message d'erreur
        {
            printf("Erreur : n doit etre superieur ou egal a 0 \n");
        }
        else if (n==0)  // Si l'entier est �gal a 0, alors on quitte la boucle
        {
            printf("Fin du programme.\n\n");
        }
        else    // Si l'entier est positif, alors on calcule la suite
        {
            res = 0;
            for (int i = 1; i <= n; i++)    // Boucle pour calculer la suite
            {
                res += (float)1/i;
            }
            printf("U%d est : %f \n", n, res);
        }
    }

}

void tableAscii()
{
    int tab[128];    // Tableau de 128 entiers
    for (int i = 33; i < 128; i++)  // Boucle pour afficher la table ASCII
    {
        tab[i] = i;
        if((i+1)%10 != 0)   // Si le num�ro de la ligne n'est pas un multiple de 10, alors on affiche le num�ro de la ligne et le caract�re correspondant
        {
            printf("[%d,%c]", tab[i], (char)tab[i]);
        }else    // Si le num�ro de la ligne est un multiple de 10, alors on affiche le num�ro de la ligne et le caract�re correspondant et on saute une ligne
        {
            printf("[%d,%c]\n", tab[i], (char)tab[i]);
        }
    }
    printf("\nFin du programme.\n\n");
}

void afficheTriangleSapin(const unsigned int n, char c)
{
    int ligne=1, espace;    // ligne = num�ro de la ligne, espace = nombre d'espace
    int l = ligne;  // l = num�ro de la ligne
    for (--ligne; ligne < n; ligne++)   // Boucle pour afficher le triangle
    {
        for (espace = 0; espace < n - ligne; espace++)// Boucle pour afficher les espaces avant le premier caractere, en fonction de la taille
        {
            printf(" ");
        }
        for (int colonne=0; colonne < l; colonne++) // Boucle pour afficher les caract�res
        {
            printf("%c", c);

        }
        l=l+2;
        printf("\n");
    }
    int base=1;
    for (base; base < 2; base++)    // Boucle pour afficher la base du sapin
    {
        for (espace = 0; espace < n - base; espace++)   // Boucle pour afficher les espaces en fonction de la taille
        {
            printf(" ");
        }
        printf("%c %c %c\n", c, c, c );
        for (espace = 0; espace < n - base; espace++)   // Boucle pour afficher les espaces en fonction de la taille
        {
            printf(" ");
        }
        printf("********************** Joyeux Noel ************* \n" );

    }
    printf("Fin du programme.\n\n");

}

void tableau()
{
    int n=1;    // n = nombre d'entiers a rentrer par l'utilisateur
    while (n != 0)
    {
        printf("Entrez la taille du tableau (0 pour terminer) : "); // Demande a l'utilisateur de rentrer un entier
        scanf("%d", &n);    // r�cup�re l'entier rentr� par l'utilisateur
        int tab [50][50];   // Tableau de 50x50 entiers

        if (n>0)    // Si l'entier demand� � l'utilisateur est positif alors on lui demande de remplir le tableau en fonction de la taille choisit
        {
            double moyenne=0, somme=0, sommeMoy=0;  // moyenne = moyenne des entiers du tableau, somme = somme des entiers du tableau, sommeMoy = somme des moyennes des lignes du tableau
            for (int i = 0; i < n; i++)    // Boucles pour demander et remplir le tableau, premi�re boucle correspondant a aux nombres de lignes
            {
                for (int j = 0; j < n; j++)    // Boucle correspondant aux colones de chaque lignes
                {
                    printf("Entrez valeur [%d, %d] : ", i+1, j+1, tab[i][j]);   // Demande a l'utilisateur de rentrer un entier
                    scanf("%d", &tab[i][j]);    // r�cup�re l'entier rentr� par l'utilisateur
                    printf("\n");
                }

            }
            printf("Ci dessous le tableau : \n");
            for (int i = 0; i < n; i++)    // Boucle pour afficher le tableau
            {
                somme = 0;
                for (int j = 0; j < n; j++)
                {
                    printf("%d              ", tab[i][j]);  // Affiche les entiers du tableau
                    somme += tab[i][j];
                }
                moyenne = somme / n;
                printf("(%f)\n", moyenne);  // pour afficher la moyenne de chaque ligne
            }
            for (int j = 0; j < n; j++)    // Boucle pour afficher la moyenne de chaque colones
            {
                somme = 0;
                for (int i = 0; i < n; i++)
                {
                    somme += tab[i][j];
                }
                moyenne = somme / n;
                printf("(%f)     ", moyenne);   // Affiche la moyenne de chaque colones
                sommeMoy += moyenne;
            }
            printf("    (%f)", sommeMoy);   // Affiche la somme de toutes les colones et lignes
            printf("\n");

        }else{
            printf("Fin du programme.\n\n");
        }

    }

}

int main()
{
    int tp =1;    // tp = num�ro du TP
    while(tp!=0){   // Boucle pour choisir le TP a afficher
        printf("Bienvenue dans le programme de TP\n" );
        printf("Vous allez pouvoir choisir le TP a tester, ci-dessous une liste :\n" );
        printf("1 - TP1.1 | Calcul d'une surface \n" );
        printf("2 - TP1.2 | Somme & multiplication \n" );
        printf("3 - TP1.3 | Le plus grand \n" );
        printf("5 - TP1.5 | Suite \n" );
        printf("6 - TP1.6 | Table ASCII \n" );
        printf("7 - TP1.7 | Etoiles \n" );
        printf("8 - TP1.8 | Tableau\n" );
        printf("0 - Pour sortir du programme\n");
        printf("\nEntrez le numero du TP a tester : " );
        scanf("%d", &tp);
        switch (tp)
        {
            case 0:
                printf("Vous avez choisi de sortir du programme.\n");
                break;
            case 1:
                printf("Vous avez choisi le TP1.1\n" );
                int cote, n;
                printf("Entrez la longueur d'un cote : ");
                scanf("%d", &cote);
                printf("Entrez le nombre de cote du polygone : ");
                scanf("%d", &n);
                polygone(cote, n);
                break;
            case 2:
                printf("Vous avez choisi le TP1.2\n" );
                sommeMultiplicity();
                break;
            case 3:
                printf("Vous avez choisi le TP1.3\n" );
                plusGrand();
                break;
            case 4:
                printf("TP 4 - Oups ce TP n'existe pas\n\n");
                break;
            case 5:
                printf("Vous avez choisi le TP1.5\n" );
                suite();
                break;
            case 6:
                printf("Vous avez choisi le TP1.6\n" );
                tableAscii();
                break;
            case 7:
                printf("Vous avez choisi le TP1.7\n" );
                int hauteur;
                char ccar ;
                printf("Entrez le nombre de ligne du sapin : ");
                scanf("%d", &hauteur);
                scanf("%c", &ccar);
                printf("Entrez le caractere a utiliser : ");
                scanf("%c", &ccar);
                afficheTriangleSapin(hauteur, ccar);
                break;
            case 8:
                printf("Vous avez choisi le TP1.8\n" );
                tableau();
                break;
            default:
                printf("Erreur, veuillez rentrer un nombre entre 1 et 8 \n");
                break;
        }
    }

    return 0;

}
