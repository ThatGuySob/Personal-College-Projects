/*
This code is used to create two arrays which reverse the first ones elements into the second one

Author: Bartosz Sobiegraj

Date:06/11/2023
*/

#include <stdio.h>

#define SIZE 4 //assigning symbolic name

int main()
{
    int array1[SIZE]; //assigning Variable types
    int array2[SIZE];
    int i;
    int temp;


    printf("Enter %d Numbers\n", SIZE);

    // this loop will be used to enter an element into the array
    for(i = 0; i < SIZE; i++) //start of for loop for first array
    { 
        scanf("%d", &array1[i]); //take user input
    } //end loop

    temp = array1[0];
    array2[0] = array1[1];
    array2[1] = temp;

    temp = array1[2];
    array2[2] = array1[3];
    array2[3] = temp;
    
    // printing the array in the correct order
    for (i = 0; i < SIZE; i++)
    {
        printf("%d", array1[i]);
        if (i != SIZE-1) //if statement for adding comas, for visual display
        {
            printf(", ");
        }
    }

    printf("\n"); //break between the two arrays 

    // printing the second array which is in reverse order
    for (i = 0; i < SIZE; i++)
    {
        printf("%d", array2[i]);
        if (i != SIZE-1) //if statement for adding comas, for visual display
        {
            printf(", ");
        }
    }

    return 0;
}