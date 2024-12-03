/*
This code is used to find the number to the power of another given number by the user

Author: Bartosz Sobiegraj 

Date:06/02/2024
*/

#include <stdio.h>

int Power(int x, int y);



int main()
{
    int num1;
    int num2;
    int GCD;

    printf("Please enter 2 numbers to get their power:\n");
    scanf("%d", &num1);
    scanf("%d", &num2);


    int result = Power(num1, num2);

    printf("%d to the power of %d is equal to %d", num1, num2, result);
    return 0;
}

int Power(x,y)
{
    if (y==0)
    {
        return 1;
    }
    else
    {
        return x*Power(x, y-1);
    }
}