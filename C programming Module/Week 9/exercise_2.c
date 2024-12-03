/*
This code is used for entering and displaying values in an array, showing the largest & smallest and the average

Author: Bartosz Sobiegraj

Date:13/11/2023
*/

#include <stdio.h>

#define ROW 3
#define COL 2

int main()
{
    int array[ROW][COL];
    int i, j;
    int largest;
    int smallest;
    int average;
    int len;
    int sum = 0;

    len = ROW*COL;

    printf("Enter %d numbers\n", ROW*COL);
    // Enter data into the array
    for(i = 0; i < ROW; i++)
    {
    // Inner for that checks columns
        for(j = 0; j < COL; j++)
        {
            // read in data
            scanf("%d", &array[i][j]);
            //arthimetic for finding the total to later use to find the average
            sum = sum + array[i][j]; 

        } // end inner for
    
    } // end outer for
    average = (float)sum/(ROW/COL);

    // assuming that the first element is both the smallest and the largest number
    largest = array[0][0];
    smallest = array[0][0];


    for(i = 0; i < ROW; i++)
    {
    // Inner for that checks columns
        for(j = 0; j < COL; j++)
        {
            if (largest < array[i][j])
            {
                largest = array[i][j];
            }

             if (smallest > array[i][j])
            {
                smallest = array[i][j];
            }

        } // end inner for
    
    } // end outer for

    // Display the numbers entered into the array
    for(i = 0; i < ROW; i++)
    {
        // // Inner for that checks columns
        for(j = 0; j < COL; j++)
        {
            // display the data
            printf("\nRow is %d, Col is %d contains %d", i, j, array[i][j]);
        } // end inner for

    } // end outer for

    //Display Largest, Smallest and Average
    printf("\n%d is the largest number in the array", largest);
    printf("\n%d is the smallest number in the array", smallest);
    printf("\nThe average is %.1f", average);

    return 0;
}