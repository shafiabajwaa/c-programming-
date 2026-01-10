#include<stdio.h>
#include<stdlib.h>
#include<time.h>

enum Status{CONTINUE , WIN , LOSE};

int rolldice(void);
int main(){

    srand(time(NULL));

    int mypoint;
    enum Status gamestatus;
    int sum = rolldice();

    switch(sum){


    case 7:
    case  11:
        gamestatus = WIN;
        break;

         case 2:
    case  3:
        case 12:
        gamestatus = LOSE;
        break;


        default:
            gamestatus= CONTINUE;
            mypoint= sum;
            printf("my point is %d\n", sum);
            }


    while( gamestatus == CONTINUE){

        sum = rolldice();
        if(sum == mypoint){
            gamestatus= WIN;
        }
        else{
        if( sum == 7){
            gamestatus= LOSE;

        }

    }
    }


    if( gamestatus == WIN){
        printf("i wonnnnnnnnnnnn\n");

    }
    else{
        printf("i loseeeeeee\n");

    }


}




int rolldice(void){

    int die1= 1 + (rand() % 6);
    int die2 = 1 + (rand() % 6);

    printf(" the roll is %d and %d and sum is %d\n", die1, die2 , die1 + die2);


  return die1 + die2;


         }
