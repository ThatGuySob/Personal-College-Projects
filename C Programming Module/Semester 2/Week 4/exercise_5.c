/*
This code is used to pass through a function which determines even and odd numbers and totals the evens

Author: Bartosz Sobiegraj

Date:15/02/2024
*/

#include <stdio.h>

#define SIZE 5 //define a symbolic name

int even(int[]); //declaring functions

int main()
{
    int numbers[SIZE]; //initialise variables
    int i;
    int total;

    printf("Please enter 5 numbers: \n");

    //asking for user input
    for (i = 0; i < SIZE; i++) //start for loop
    {
        scanf("%d", &numbers[i]);
    } //end for loop

    //calling function
    total = even(numbers);

    printf("There are %d even numbers in the array", total);

    return 0;
}

int even(int array[])
{
    int i;
    int count = 0; // initialising variables


    for (i = 0; i < SIZE; i++) //start for loop 
    {
        if (array[i] % 2 == 0) //modulus 2 to see if its even
        {
            printf("%d is even\n", array[i]);
            count++;
        } //end if
    	else
        {
            printf("%d is odd\n", array[i]);
        } //end else
    } //end for loop

    return count; //returning value into main(1)
}