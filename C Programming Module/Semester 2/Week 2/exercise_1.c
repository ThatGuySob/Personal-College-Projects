/*
This code is used to print 10 stars

Author: Bartosz Sobiegraj

Date:01/02/2024
*/

#include <stdio.h>

#define SIZE 10

void stars(int);

int main()
{

    stars(SIZE);

    return 0;

}

void stars(int amount)
{
    int i;

    for(i = 0; i < amount; i++)
    {
        printf("*");
    } // end for

    return 0;
} // end average_result()