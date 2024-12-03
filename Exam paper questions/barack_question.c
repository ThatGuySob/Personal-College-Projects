/*
This code is used to 

Author: Bartosz Sobiegraj

Date:23/10/2023
*/

#include <stdio.h>
int main()
{
    char barack[] = {'Y', 'E', 'S', ' ', 'W', 'E', ' ', 'C', 'A', 'N'};
    int i;


    // display the contents of bararck array
    for(i = 0; i< 10; i++)
    {  
        printf("%c", *(barack + i));
    }


    //change the blank elemens to an underscore
    for(i = 0; i< 10; i++)
    {
        if(*(barack + i) == ' ')
        {
            *(barack + i) = '_';
        }
    }

    printf("\n\n");

    for(i = 0; i< 10; i++)
    {
        printf("%c", *(barack + i));
    }
    return 0;
}