#include<stdio.h>
#include<math.h>

int main(){
float x;
int y;



printf("enter the number(-1 to end )\n");
scanf("%f", &x);

while(x != -1){

y = ceil(x + .5);

printf("the original number was %.2f\n", x);
       printf("the rounded number is %d\n", y);

       printf("enter the number\n");
scanf("%f", &x);


}
}
