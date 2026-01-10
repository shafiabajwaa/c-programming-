#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void generatequestion(int*x, int*y);
int main(){
    int a,b;
    int answer;
    srand(time(NULL));
    generatequestion(&a, &b);
    while(1){
        printf("the product of %d and %d is?\n", a, b);
        scanf("%d", &answer);

        if(answer == a*b){
            printf("VERY GOOD!\n");
            generatequestion(&a, &b);
        }
    else if(answer != a * b){
        printf("NO!PLEASE TRY AGAIN\n");
    }}
    return 0;
    }

    void generatequestion(int*x ,int* y){
        *x = rand()%10 + 1;
        *y = rand()%10 + 1;
    }
