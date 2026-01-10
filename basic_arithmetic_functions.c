#include <stdio.h>
 int add(int ,int);
 int subtract(int ,int);
 int multiply(int ,int);
 float divide(int , int);
 int square (int);
 void printresultint (int);
 void printresultfloat (float);

 int main(){

 int sum = add(8 , 4);
 printresultint(sum);
 int diff = subtract(8,4);
 printresultint(diff);
 int prod = multiply(8, 4);
 printresultint(prod);
 float division = divide(8,4);
 printresultfloat(division);
 int sq = square(8);
 printresultint(sq);


 }

 int add(int x, int y) {
    return x + y;
}

int subtract(int x, int y) {
    return x - y;
}

int multiply(int x, int y) {
    return x * y;
}

float divide(int x, int y) {
    if (y != 0)
        return (float)x / y;
    else
        return 0.0; // Handle division by zero
}

int square(int x) {
    return x * x;
}

void printresultfloat(float x) {
    printf("%.2f\n", x);
}

void printresultint(int x){
      printf("%d\n", x);
      }


