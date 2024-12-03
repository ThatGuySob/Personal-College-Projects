/*
This code is used to get the Sum and the Average of three numbers using functions

Author: Bartosz Sobiegraj

Date:01/02/2024
*/

#include <stdio.h>

//assigning symbolic numbers
#define SIZE 10

//functions used for calculating sum and average
int sum_array(int[]);
int average_result(int);

int main()
{
    //assign variables
    int numbers[SIZE];
    int i;
    int sum;
    int avg;

    //ask user to input numbers into the array
    printf("Please enter %d numbers:\n", SIZE);
    
    for(i = 0; i < SIZE; i++)//start for loop
    {
        scanf("%d", &numbers[i]); 
        //user input
    } //end for loop

    sum = sum_array(numbers); //call sum function
    avg = average_result(sum); //call average function

    //print out the results of data
    printf("The Sum of the %d numbers is %d", SIZE, sum);
    printf("\nThe Average of the %d numbers is %d", SIZE, avg);

    return 0;
}

int sum_array(int array[])
{
    int total = 0;
    int i;


    // calculate the total of the array
    for(i = 0; i < SIZE; i++)
    {
        total = total + array[i];
    } // end for

    return total;

} // end sum_array()

int average_result(int sum)
{
    int avg;
    //calculate average

    avg = sum/SIZE;

    return avg;
} // end average_result()