#include <stdio.h>

int main( ){

int highestRainfall;
int currentRainfall;

printf( " The highest rainfall ever in one season of country\n" );
scanf( "%d", &highestRainfall );

printf( " The rainfall in the current year of that country\n" );
scanf( "%d", &currentRainfall );

if( currentRainfall > highestRainfall ){
    highestRainfall = currentRainfall;
}
printf( "Current rainfall is assigned as the highest rainfall ever" );

return 0;
}
