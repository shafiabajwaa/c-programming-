#include <stdio.h>

int main( ){
int integer1;
int integer2;
int integer3;

printf( "Enter first integer:\n" );
scanf( "%d", &integer1 );

printf( "Enter second integer:\n" );
scanf( "%d", &integer2 );

printf( "Enter third integer:\n" );
scanf( "%d", &integer3 );

int largest;
largest = integer1;
if( integer2 > integer1 ){
    largest = integer2;
}
if( integer3 > integer1 ){
    largest = integer3;
}
printf( "Largest is %d\n", largest );

int smallest;
smallest = integer1;
if( integer2 < integer1 ){
    smallest = integer2;
}
if( integer3 < integer1 ){
    smallest = integer3;
}
printf( "Smallest is %d\n", smallest );
return 0;
}
