/*
This code is used to check whether or not the integer is odd or even

Author: Bartosz Sobiegraj

Date:16/10/2023
*/

#include <stdio.h>
int main()
{
    int number; //assigning variable types


    printf("Enter a number between 1 and 100:\n");  
    scanf("%d", &number);  //collecting user input

    while (number != 1 && number !=0)
    {
        number = number - 2;
        ;
    }
    printf("number is %.d", number);

    if (number = 1)
    {
        printf("number is odd");
    }
    else if (number = 0);
    {
        printf("number is even");
    }
    return 0;
}