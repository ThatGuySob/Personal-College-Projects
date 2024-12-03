/*
This code is used to 

Author: Bartosz Sobiegraj

Date:23/10/2023
*/

#include <stdio.h>

int Fibonacci(int x);

int main()
{
    int user;
    int result;

    printf("Please enter a number to get a position in the Fibonacci sequence:");
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

