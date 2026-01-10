#include <stdio.h>
// function main begins
int main( void ){

int integer1; // first number to be entered by user
int integer2;

  printf( "Enter first integer:\n" ); // prompt
  scanf( "%d", &integer1 ); // read an integer

  printf( "Enter second integer:\n" ); // prompt
  scanf( "%d", &integer2 ); // read an integer

  int sum;
  sum = integer1 + integer2;

  int product;
  product = integer1 * integer2;

  int difference;
  difference = integer1 - integer2;

  int quotient;
  quotient = integer1 / integer2;

  int remainder;
  remainder = integer1 % integer2;

  printf( "sum is %d\n", sum );
  printf( "product is %d\n", product );
  printf( "difference is %d\n", difference );
  printf( "quotient is %d\n", quotient );
  printf( "remainder is %d\n", remainder );

return 0;
} // end function main
