/*
Built-in string functions

Finding the length of a string - strlen()
*/

#include <stdio.h>
#include <string.h>


int main()
{
    char name1[] = "Sharon";
    char name2[10] = "Mark";
    char *name3 = "Patrick";
    
    
    int length = 0;
    
    
    // length is assigned the number of characters in the string inside array name1
    length = strlen(name1);
    
    // Display the number of characters in the following strings
    printf("\n%d %d %d %d %d", strlen(name1), strlen(name2), strlen(name3), strlen("Mary"), length);
    
    return 0;
    
} // end main()