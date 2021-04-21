#include <stdio.h>
#include <stdlib.h>


int main()
{
   

    int i = 1;
    printf( "%i\n", i );
    printf( "%i\n", ++i );
    i++;
    printf( "%i\n", i );

    system("cls");

    int i2 = 5;
    printf("%i", i2);
    printf("%i", --i2);
    i2--;
    printf("%i", i2 );

 

    int x = 0;
    x = x + 10;
    x += 10;
    ++x;
    system( "cls ");

    printf("%i", x);


    return 0;
}