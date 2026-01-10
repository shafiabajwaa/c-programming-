#include<stdio.h>

int main (){

FILE *cfptr;
 if((cfptr = fopen("clients.txt", "w")) == NULL){
 printf("invalid file");
 }
 else

{

    printf("account number, name and balance");
    printf("enter eof to end input");
    printf("?");

    unsigned int account;
    char names[30];
    double balance;

    scanf("%u %29s %lf", &account , names , &balance);

    while(!feof(stdin)){
        fprintf(cfptr, "%u %s %.2f", account,names , balance);
        scanf("%u %29s %lf", &account , names , &balance);
    }

    fclose(cfptr);}
}
