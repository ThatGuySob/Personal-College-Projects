/*
This code is used to 

Author: Bartosz Sobiegraj

Date:01/02/2024
*/

#include <stdio.h>

#define SIZE 10

int main()
{
    char *text = "some text" ;


    printf( "%s\n", text );
    printf( "%s\n", *text );
    printf( "%s\n", *"more text" );
    printf( "%s\n", *(text+1) );
    printf( text );
    *( text + 4 ) = '\0' ; printf("\n%s\n", text) ;
    printf( "%s", "text"[2] );
    printf( "%c", "text" + 2 );


    return 0;
}