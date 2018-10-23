#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Délaration des variables
    char car1 = 'r', car2 = 't';
    int i=0, j=0, taille=0;

    //L'utilisateur choisi les caractères et la taille du dessin
    printf("Choisissez deux caractere : ");
    scanf("%c %c",&car1, &car2);

    printf("Choisissez la taille du dessin : ");
    scanf("%d",&taille);

    for(i=1;i<=taille;i++){//pour i de 1 a la taille choisie par l'utilisateur --> lignes
        for(j=1;j<=taille;j++){//pour j de 1 a la taille choisie par l'utiliteur --> colonnes

            if(i==1 || i==taille || j==1 || j==taille)  //Sur la première et la dernière ligne ET sur la première et dernière colonne
                printf("%c",car1);                      //On affiche le premier caractère
            else
                printf("%c",car2);                     //Sinon on affiche le deuxième caractère
        }
        printf("\n");       //Retour à la ligne
    }

    return 0;
}
