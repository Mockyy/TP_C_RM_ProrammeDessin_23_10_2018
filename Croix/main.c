#include <stdio.h>
#include <stdlib.h>

int main()
{
    //D�laration des variables
    char car = 'r';
    int i=0, j=0, taille=0;

    //L'utilisateur choisi le caract�re et la taille du dessin
    printf("Choisissez un caractere : ");
    scanf("%c",&car);

    printf("Choisissez la taille du dessin : ");
    scanf("%d",&taille);

    for(i=1;i<=taille;i++){//pour i de 1 a la taille choisie par l'utilisateur --> lignes
        for(j=1;j<=taille;j++){//pour j de 1 a la taille choisie par l'utiliteur --> colonnes

            if(i==j || i+j==taille+1)   //quand ligne = colonne OU ligne + colonne = taille + 1
                printf("%c",car);       //on affiche le caract�re choisi
            else
                printf(" ");            //sinon on n'affiche rien
        }
        printf("\n");                   //retour � la ligne apr�s chaque ligne
    }

    return 0;
}
