#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{ 
    srand(time(NULL));
    const int MIN = 1;
    const int MAX = 100;
    int randomNum = (rand() % MAX) + MIN;
    int guess;
    int guesses = 1;
    int isFinished = 0;


    printf("Välkommen till 'Gissa Talet'!!\n");
    printf("Gissa ett tal mellan 1 - 100 \n");
    scanf("%d", &guess);
    while (isFinished == 0)
    {
        if (guess > randomNum)
        {
            printf("Gissa lägre!\n");
            scanf("%d", &guess);
        }
        else if (guess < randomNum)
        {
            printf("Gissa högre!\n");
            scanf("%d", &guess);
        }
        else if (guess > 100)
        {
            printf("Talet måste vara mellan 1-100");
            scanf("%d", &guess);
        }
        else
        {
            printf("Du gissade rätt! Rätt svar är: %d\n", randomNum);
            printf("Du gissade rätt på %d försök\n", guesses);
            printf("Vill du spela igen? (y/n) \n");
            char playAgain;
            scanf(" %c", &playAgain);
            
            if (playAgain == 'y')
            {
                randomNum = (rand() % MAX) + MIN;
                printf("Gissa ett tal mellan 1 - 100 \n");
                scanf("%d", &guess);
                guesses = 0;
            }
            else
            {
                printf("Bra spelat!\n");
                isFinished = 1;
            }
            
            
        }
        guesses++;
    }
}