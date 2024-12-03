/*
This code is used to 

Author: Bartosz Sobiegraj

Date:23/10/2023
*/

#include <stdio.h>
int main()
{
    int number; 

    number = 10;

    while (number != 0)
        {
            printf("%d", number);
            if (number != 1)
            {
                printf(",");
            }
            number --;
        }

    return 0;
}