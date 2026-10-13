#include <stdio.h> 
#include <stdlib.h> 
#include <time.h>  

int main(void)
{     
    
    srand(time(NULL));

    int min = 1;
    int max = 100;



    int Deine_gesuchte_Zahl = (rand() % (max - min + 1)) + min; 
    float Deine_Eingabe;
    int Versuche = 1;
    
    printf("Suche deine Schwierigkeit aus!\n 1 = Easy 0 - 10 2 = Medium 0 - 20 3 Hard 0 - 50 4 Extrem 0 - 100\n");
    printf("Wie viele Versuche willst du haben?\nDu kannst von 1 bis 10 haben! ");
    scanf("%d",&Versuche);
    if(Versuche > 10)
    {
        printf("Du Schummler! :(\n");
        Versuche = 1;
    }
    
    printf("Ok du hast %d Versuche!\n",Versuche);

    for(int e = 0;e < Versuche;e++)
    {
        scanf("%f",&Deine_Eingabe);

        if(Deine_Eingabe > Deine_gesuchte_Zahl)
        {
            printf("Deine Eingabe war > als die gewunschte Zahl :(\n ");
        }
        else if(Deine_Eingabe < Deine_gesuchte_Zahl)
        {
            printf("Deine Eingabe war < als die gewunschte Zahl :(\n ");
        }
        else if(Deine_Eingabe == Deine_gesuchte_Zahl)
        {
            printf("Du hast Gewonnen :) ");
            break;
        }

    }
    
    if(Deine_Eingabe != Deine_gesuchte_Zahl) 
    {
        printf("Du hast verloren :(\n");
        printf(" Die Richtige Zahl war %d",Deine_gesuchte_Zahl);
    }
    


    
    return 0; 
}