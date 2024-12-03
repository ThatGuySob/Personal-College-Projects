/*
This code is used to demonstrate 

Author: Bartosz Sobiegraj

Date:02/10/2023
*/

#include <stdio.h>
int main()
{
    int total;
    int num;

    num = 1;
    total = 0;

    while (num != 5)
    {
        total = total + num;
        num = num++;
    }

    printf("%d", total);
    return 0;
}