#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define SIZE 50

int main(){

printf("                       Game: Frog vs. Snake Race\n");
srand(time(NULL));
int frog= 1;
int snake=1;
char track[SIZE];

while(snake < SIZE && frog < SIZE){



        for(int i = 0 ; i<= SIZE-1 ; i++)
        track[i]=0;


int     f=rand()% 10 +1;
        if(f<5)
        frog += 4;
        else if(f<7)
        frog -= 2;
        else
        frog +=1;

 int    s=rand()%10+1;
     if(s<6)
        snake += 2;
        else if(s<9)
        snake -= 1;
        else
        snake +=0 ;

    if(frog<1)
        frog =1;
    if(snake<1)
        snake =1;

        if(frog> SIZE)
        frog = SIZE;
    if(snake> SIZE)
        snake =SIZE;



        if(frog == snake){
            track[frog-1]=3;}
            else {
            track[frog-1]=1;
            track[snake-1]= 2;}

        for(int i = 0 ; i<= SIZE-1 ; i++){
            if(track[i] == 3)
                printf("ouch");
            else if(track[i] == 1)
                printf("F");
             else if(track[i] == 2)
                printf("S");
                else
                    printf(" ");

        }
        printf("\n");
}
if( frog >= SIZE && snake>=SIZE )
    printf("its a tie");
else if(frog >= SIZE)
    printf(" frog wins");
else if (snake>= SIZE)
    printf(" snake wins");

                return 0;

}

























