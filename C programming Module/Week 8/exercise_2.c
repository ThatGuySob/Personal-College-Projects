/*
This code is used to 

Author: Bartosz Sobiegraj

Date:23/10/2023
*/

#include <stdio.h>

#define SIZE 3

int main()
{
    int farenheit[SIZE]; //assigning Variable types
    int celsius[SIZE];
    int i;


    printf("Enter %d temperatures\n", SIZE);

    for(i = 0; i < SIZE; i++) //start of for loop for first array
    { 
        scanf("%d", &farenheit[i]); //take user input
    } //end loop

    for(i = 0; i < SIZE; i++) 
    { 
       
        celsius[i] = (farenheit[i] - 32.0) * (5.0 / 9.0);
        
        printf("%d degrees Farenheit is %d degrees Celsius\n", farenheit[i],celsius[i]);
    } //end loop
    return 0;
}