#include <stdio.h> 
#include <stdlib.h> 
#include <time.h>  

int main(void)
{     
    
    srand(time(NULL));

    int min = 1;
    int max = 100;#include <stdio.h> 
#include <stdlib.h> 
#include <time.h>  

int main(void)
{     
    
    srand(time(NULL));

    int min = 1;
    int max = 100;
    int Schwierigkeit;
    int hilfe;
    int versuche;

    printf("Suche deine Schwierigkeit aus!\n 1 = Extrem 0 - 100 / 2 = Hard 0 - 50 / 3 Medium 0 - 33 / 4 Easy 0 - 25/ -1 = Custom / 0 = Anderer Spielmodus \n");
    scanf("%d",&Schwierigkeit);

    if(Schwierigkeit == 0)
    {   
        printf("Du hast einen anderen Spielmodus ausgesucht! Brauchst du hilfe == 0 / Spielen == ENTER\n");
        scanf("%d",&hilfe);
        if(hilfe == 0)
        {
            printf("In dem Spielmodus wird nach jedem versuch die zahl neu gemacht so setzt max nicht so hoch!\n Ausserdem kannst du so viele Versuche haben wie du willst!")
        }
        Schwierigkeit = 1
    
    }
        if(Schwierigkeit == -1)
    {
        printf("Du hast Custom ausgesucht gib jetzt den MAX wert an\n");
        scanf("%d",&max);
        printf("Deine Zahl ist zwischen 1 und %d\n",max);
        if(max <= min)
        {   
            printf("max kann nicht kleiner als min sein! max = 100\n");
            max = 100;

        }
    }


    
    
    
    if(Schwierigkeit > 4)
    {
        max = max * Schwierigkeit;
    }
    else
    {
        max = max/Schwierigkeit;
    }
    
    


    int Deine_gesuchte_Zahl = (rand() % (max - min + 1)) + min; 
    float Deine_Eingabe;
    
    
    
    printf("Wie viele Versuche willst du haben?\nDu kannst von 1 bis 10 haben! ");
    scanf("%d",&versuche);
    if(versuche > 10)
    {
        printf("Du Schummler! :(\n");
        versuche = 1;
    }
    
    printf("Ok du hast %d Versuche!\n",versuche);

    for(int e = 0;e < versuche;e++)
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



