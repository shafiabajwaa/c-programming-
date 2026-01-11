/*
  Problem 1: Array Transformation
  Author: Shafia Bajwa
  Date: 10-Jan-2026
  Description:
    - Reads 10 integers from the user.
    - Replaces every even number with its square.
    - Replaces every odd number with its cube.
    - Prints the transformed array.
  Concepts Covered: Arrays, Loops, Conditionals, Arithmetic Operators
*/

#include <stdio.h>
int main(){

int integers[10];

   for(int i=0 ; i< 10; i++){
   printf("Enter the integers ");
   scanf("%d", &integers[i]);
   }

   for(int i=0 ; i< 10; i++){
   if (integers[i] % 2 == 0){
       integers[i]= integers[i]*integers[i];}
   else
       integers[i] = integers[i]*integers[i]*integers[i];


}
 for(int i=0 ; i< 10; i++){
  printf("%d  ", integers[i]);
}
}
