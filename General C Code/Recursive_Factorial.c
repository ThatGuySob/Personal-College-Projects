/*
This code is used to caluclate the factorial of a given number

Author: Bartosz Sobiegraj

Date:06/02/2024
*/

#include <stdio.h>

int Factorial(int);

int main()
{
    int user;
    int result;

    printf("Please enter a number to get a factorial:");
    scanf("%d", &user);

    result = Factorial(user);

    printf("The factorial of %d is %d", user, result);
    

    return 0;
}

Factorial(n)
{
    if (n == 1 || n == 0)
    {
        return 1;
    }
    else
    {
        return n*Factorial(n - 1);
    }
}