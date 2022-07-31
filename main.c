#include <stdio.h>
#include <stdlib.h>


int main()
{

    int choix, ChoixdeLait, Sucre;
    float prix=0;
    //char message[300];
    //message[8] = "votre ";
    //scanf("%d",&message);
    printf("Voulez-vous Choisir un Boisson Svp\n");
    printf("*******************************************\n");
    printf("Pour choisir un Cafe Tape le Numero 1\n");
    printf("Pour choisir un The Tape le Numero 2\n");
    printf("Pour choisir un Chocolate Tape le Numero 3\n");
    printf("Pour choisir un Soda Tape le Numero 4\n");
    printf("*******************************************\n");
    scanf("%d",&choix);

    switch(choix)
    {
    case 1 :prix = prix + 2;
            printf("Choisir la dose du sucre? (0,25 Dh pour une dose)\n");
            printf("Saisir ( 0 = non sucré, 1 = sucré, 2 trés sucré )\n");
            scanf("%d",&Sucre);
            if(Sucre == 1){
                prix+= 0.25;
            }
            else if (Sucre == 2){
                prix+= 0.50;
            }
            else {
            }

            printf("Vous voulez du lait supplementaire? (1 Dh de plus)\n");
            printf("0=Non et 1=Oui\n");
            scanf("%d", &ChoixdeLait);
            if(ChoixdeLait == 1){
                prix = prix + 1;
            }
            break;

    case 2 :prix = prix +2;
            printf("Votre choix est The\n");
            printf("Vous voulez du lait supplimentaire? (1 Dh de plus)\n");
            printf("0=Non et 1=Oui\n");
            scanf("%d", &ChoixdeLait);
            if(ChoixdeLait == 1){
                prix = prix + 1;
            }
            printf("Choisir la dose du sucre? (0,25 Dh pour une dose)\n");
            printf("Saisir ( 0 = non sucrée, 1 = sucrée, 2 trés sucrée )\n");
            scanf("%d",&Sucre);
            if(Sucre == 1){
                prix+= 0.25;
            }
            else if (Sucre == 2){
                prix+= 0.50;
            }

            break;

    case 3 :prix = 2.5;
            //message += "Chocolat ";
            printf("Votre choix est Chocolat\n");
            printf("Vous voulez du lait supplimentaire? (1 Dh de plus)\n");
            printf("0=Non et 1=Oui\n");
            scanf("%d", &ChoixdeLait);
            if(ChoixdeLait == 1){
                prix = prix + 1;
            }
            printf("Choisir la dose du sucre? (0,25 Dh pour une dose)\n");
            printf("Saisir ( 0 = non sucrée, 1 = sucrée, 2 trés sucrée )\n");
            scanf("%d",&Sucre);
            if(Sucre == 1){
                prix+= 0.25;
            }
            else if (Sucre == 2){
                prix+= 0.50;
            }
            break;
    case 4 :prix = 3;
           // message += "Soda ";
            printf("Votre Soda\n");
            break;
    default : printf("votre choix est incorrect");
    }

    //printf(" est pret");
    printf("Vous devez payer %f DH", prix);


    return 0;
}
