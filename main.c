#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {

    //Déclarations
    int chiffreADeviner = 0;
    int delta = 100;
    int chiffreProposer = delta;

    //Génération d'un chiffre aléatoire
    srand( time(NULL) );
    chiffreADeviner = rand()%101;

    //Tant que le chiffre n'est pas deviner
    while (1){

        //Proposition système
        printf("Le système propose %d \n",chiffreProposer);

        //Comparaisons
        if(chiffreProposer == chiffreADeviner){
            break;
        }else if (chiffreProposer > chiffreADeviner) {
            printf("C'est moins !\n");
            chiffreProposer -= delta;
        }else{
            printf("C'est plus !\n");
            chiffreProposer += delta;
        }

        //Dichotomie
        delta /=2;

        //Ajustement
        if(delta == 0){
            delta = 1;
        }

    }

    //Résultat
    printf("Félicitation, vous avez devinez le chiffre %d\n",chiffreADeviner);

    return 0;
}
