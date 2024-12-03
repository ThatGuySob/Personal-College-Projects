/*
This code is used to 

Author: Bartosz Sobiegraj

Date:23/10/2023
*/

#include <stdio.h>

#define SIZE 3

int main()
{
    int array1[SIZE]; //assigning Variable types
    int temp;
    int i;


    printf("Enter %d temperatures\n", SIZE);

    for(i = 0; i < SIZE; i++) //start of for loop for first array
    { 
        scanf("%d", &array1[i]); //take user input
    } //end loop

    temp = array1[1]

    if array1[2] < array1[1]
    {
        array1[1] = array1[2]
        array1[2] = temp
    }
    

    return 0;
}