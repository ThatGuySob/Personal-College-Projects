/*
This code is used to get the sum of digits in a single number

Author: Bartosz Sobiegraj

Date:01/02/2024
*/

#include <stdio.h>

int sumdigits(int);

int main()
{
    int user;
    int result;

    printf("Please enter a number to get the sum:");
    scanf("%d", &user);

    result = sumdigits(user);

    printf("The Sum of %d is %d", user, result);
    return 0;
}

sumdigits(n)
{
    if (n < 10)
    {
        return n;
    }
    else 
    {
        return n % 10 + sumdigits(n /10); 
    }
}