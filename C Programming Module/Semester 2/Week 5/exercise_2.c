/*
This code is used to 

Author: Bartosz Sobiegraj

Date:01/02/2024
*/

#include <stdio.h>

#define SIZE 10

int main()
{
    char name[] = { 'R', 'o', 'b', 'e', 'r', 't'} ;
    puts( name ) ; //needs brackets
    scanf( "%s", &name ) ; // fine as it is
    strcopy( name, "Philip" ) ; //needs the string library
    *( name + 5 ) = "a" ; //needs to have a pointer variable
    // name = "Philip "; // no char or array definition

    
    
    return 0;
}