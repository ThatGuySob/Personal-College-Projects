/*
This code is used to create two arrays which reverse the first ones elements into the second one

Author: Bartosz Sobiegraj

Date:06/11/2023
*/

#include <stdio.h>

#define SIZE 5 //assigning symbolic name

int main()
{
    char array1[SIZE]; //assigning Variable types
    int i;


    printf("Enter %d Characters\n", SIZE);

    // this loop will be used to enter an element into the array
    for(i = 0; i < SIZE; i++) //start of for loop for first array
    { 
        scanf(" %c", &array1[i]); //take user input
    } //end loop

    // printing the array in the correct order
    for (i = 0; i < SIZE; i++)
    {
        printf("%c", array1[i]);
        if (i != SIZE-1) //if statement for adding comas, for visual display
        {
            printf(", ");
        }
    }

    return 0;
}