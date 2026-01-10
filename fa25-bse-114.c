#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){

int tortoise = 1;
int hare = 1;
int finish= 70;
int i;

srand(time(NULL));

printf("BANG!!!!!!\n");
printf("AND THEY'RE OFF\n");

while(tortoise<finish && hare<finish){
        int t = rand() % 10 + 1;

        if (t <= 5)
            tortoise += 3;
        else if(t <= 7)
            tortoise -= 6;
        else
            tortoise += 1;

            int h = rand() % 10 + 1;
        if(h <= 2)
            hare += 0;
        else if (h<= 4)
            hare += 9;
         else if ( h == 5)
            hare -= 12;
        else if( h <= 8)
            hare += 1;
        else
            hare -=2;

            if( tortoise< 1)
            tortoise = 1;
            if (hare< 1)
                hare = 1;

            for(i = 1; i< 70; i++){
                if(i == tortoise && i == hare)
                printf("OUCH!!!");
            else if ( i == tortoise)
                printf("T");
            else if( i == hare)
                printf("H");
            else
                printf(" ");
            }
            printf("\n");

            }

            if(tortoise>= finish && hare>= finish )
                printf("its a tiee");
            else if(tortoise >= finish)
                printf(" tortoise wins yaaaa");
            else if( hare >= finish)
               printf("hare winss");
            return 0;

    }







