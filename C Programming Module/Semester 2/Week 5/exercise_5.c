/*
This code is used to 

Author: Bartosz Sobiegraj

Date:01/02/2024
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char *p = "abcd" ; 
    while ( *p )
        putchar( *p++) ;
    
    char *text = "abcd" ;
    char *p = text ; 
    p += strlen( p ) - 1 ; 
    while ( text <= p)
    puts( p-- ) ;

    return 0;
}