#include <stdio.h>

int main( void ){
    int u;
    int a;
    int t;

printf( "initialVelocity is:\n" );
scanf( "%d", &u );

printf( "acceleration is:\n" );
scanf( "%d", &a );

printf( "time is:\n" );
scanf( "%d", &t );

   int v;


v = u + ( a * t );

printf( "finalVelocity is %d", v );

   int s;

s = ( u * t ) + 0.5 * a * t * t;
printf( " distance is %d", s );


return 0;
}
