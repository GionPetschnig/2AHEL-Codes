#include <stdio.h> 

int main()
{
    char secret[] = "HALLO";
    char guess;


    if(scanf(" %c",&guess) != 1)
    {
        printf("Falsch");
        return 1;
    }
    int hits = 0;
    for (int i = 0;i < sizeof(secret) - 1;i++)
    {
     
        if ((secret[i]) == guess)
        {
            hits ++;
        }
    }
    printf("Teffer: %d",hits);
}
