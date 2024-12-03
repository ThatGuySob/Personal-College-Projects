/*
This code is used to get a nth number from the fibonacci sequence

Author: Bartosz Sobiegraj

Date:06/02/2024
*/

#include <stdio.h>

int Fibonacci(int x);

int main()
{
    int user;
    int result;

    printf("Please enter a number to get a position in the Fibonacci sequence:"); //largest is 2147483647
    scanf("%d", &user);

    result = Fibonacci(user);

    printf("The %d position of fibonacci is %d", user, result);
    return 0;
}

int Fibonacci(n)
{   
    if (n == 0 || n == 1)
    {
        return n;
    }
    else
    {
        return Fibonacci(n - 1) + Fibonacci(n - 2);
    }
}

