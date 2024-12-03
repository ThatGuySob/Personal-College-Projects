/*
This code is used to put floating number contents from array1 into array2 and then display

Author: Bartosz Sobiegraj

Date:04/12/2023
*/
#define SIZE 3

#include <stdio.h>
int main()
{
    float array1[SIZE]; //assigning Variable types
    float array2[SIZE];
    int i;


    printf("Enter %d float numbers:\n", SIZE);

    for(i = 0; i < SIZE; i++) //start of for loop for first array
    { 
        scanf("%f", & *(array1 + i)); //take user input
    } //end loop

    for(i = 0; i < SIZE; i++) 
    { 
        // Putting contents of array1 into array2
        *(array2 + i) = *(array1 + i);
        
    } //end loop

    printf("\nThe elements of array1 are:");

    for(i = 0; i < SIZE; i++) //start of for loop for printing the first array
    { 
        printf("\n%.2f", *(array1 + i));
    } //end loop

    printf("\nThe elements of array2 are:"); 

    for(i = 0; i < SIZE; i++) //start of for loop for printing the second array
    { 
        printf("\n%.2f", *(array2 + i));
    } //end loop
    
    
    return 0;
}