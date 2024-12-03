/*
This code is used to show the process of pass by value

Author: Bartosz Sobiegraj

Date:08/02/2024
*/

#include <stdio.h>

void increment2(int);

int main()
{
    int num = 1;

    increment2(num);

    return 0;
}

void increment2(int num)
{
    num += 2;

    printf("The Number after passing by value is %d", num);

}
