#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    const int MIN = 1;
    const int MAX = 100;
    int answer, guess, counter = 0;
    char name[20];

    srand(time(0));

    answer = (rand() % MAX) + MIN;

    printf("\n***WELCOME TO GUESSING GAME***\n");
    printf("Enter your name: ");
    gets(name);
    do
    {
        printf("Enter your guess: ");
        scanf("%d", &guess);

        if (guess < answer)
        {
            printf("Your guess is too low...\n");
        }
        else if (guess > answer)
        {
            printf("Your guess is too high...\n");
        }
        else
        {
            printf("****************************");
            printf("\nCongratulations %s you won!!!", name);
        }
        counter++;

    } while (guess != answer);

    printf("\nThe answer is %d", answer);
    printf("\nGuesses: %d", counter);
    printf("\n****************************");

    return 0;
}
