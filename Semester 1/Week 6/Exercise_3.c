/*
This code is used to 

Author: Bartosz Sobiegraj

Date:23/10/2023
*/

#include <stdio.h>
int main()
{
    int number; //assigning Variable types
    int i;
    do 
    {
    printf("Enter a number between 1 and 5:  ");  
    scanf("%d", &number);  //collecting user input

    }
    while (number < 1 || number > 5);

    for (i=0; i <= 20; i++)
     {
        if (i % number == 0)
        {
            printf("%d is divisible by %d\n", i, number);
        }
    }
    return 0;
}