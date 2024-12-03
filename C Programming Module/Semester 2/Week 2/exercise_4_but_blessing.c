/*
This code is used to get the Sum and the Average of three numbers using functions

Author: Bartosz Sobiegraj

Date:01/02/2024
*/

#include <stdio.h>

//assigning symbolic numbers
#define SIZE 3

//functions used for calculating sum and average
void sum_array(int[]);
void average_result(int);

int main()
{
    //assign variables
    int numbers[SIZE];
    int i;


    //ask user to input numbers into the array
    printf("Please enter %d numbers:\n", SIZE);
    
    for(i = 0; i < SIZE; i++)//start for loop
    {
        scanf("%d", &numbers[i]); 
        //user input
    } //end for loop

    sum_array(numbers); //call sum function

    //print out the results of data

    return 0;
}

void sum_array(int array[])
{
    int total = 0;
    int i;


    // calculate the total of the array
    for(i = 0; i < SIZE; i++)
    {
        total = total + array[i];
    } // end for

    printf("The Sum of the %d numbers is %d", SIZE, total);

    average_result(total); //call average function




} // end sum_array()

void average_result(int sum)
{
    int avg;
    //calculate average

    avg = sum/SIZE;

    printf("\nThe Average of the %d numbers is %d", SIZE, avg);


} // end average_result()