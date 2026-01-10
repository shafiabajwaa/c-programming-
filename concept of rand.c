#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* Function to generate a multiplication question */
void generateQuestion(int *x, int *y)
{
    *x = rand() % 9 + 1;   // number between 1 and 9
    *y = rand() % 9 + 1;   // number between 1 and 9
}

int main()
{
    int a, b;
    int answer;

    srand(time(NULL));   // seed random numbers

    // generate first question
    generateQuestion(&a, &b);

    while (1)
    {
        printf("How much is %d times %d? ", a, b);
        scanf("%d", &answer);

        if (answer == a * b)
        {
            printf("Very good!\n\n");
            // generate new question after correct answer
            generateQuestion(&a, &b);
        }
        else
        {
            printf("No. Please try again.\n");
            // same question is repeated
        }
    }

    return 0;
}

