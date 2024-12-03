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
    int row_sum;
    int col_sum;


    printf("Enter %d numbers\n", ROW*COL);
    // Enter data into the array
    for(i = 0; i < ROW; i++)
    {
    // Inner for that checks columns
        for(j = 0; j < COL; j++)
        {
            // read in data
            scanf("%d", &array[i][j]);

        } // end inner for
    
    } // end outer for

    printf("\nSum of each row:\n");
    for (i = 0; i < ROW; ++i) 
    {
        row_sum = 0;
        for (j = 0; j < COL; ++j)
        {
            row_sum += array[i][j];
        }
        printf("Row %d: %d\n", i, row_sum);
    }

    printf("\nSum of each col:\n");
    for (j = 0; j < COL; ++j) 
    {
        col_sum = 0;
        for (i = 0; i < ROW; ++i)
        {
            col_sum += array[i][j];
        }
        printf("Col %d: %d\n", i, col_sum);
    }

    largest = array[0][0];


    for(i = 0; i < ROW; i++)
    {
    // Inner for that checks columns
        for(j = 0; j < COL; j++)
        {
            if (largest < array[i][j])
            {
                largest = array[i][j];
            }
        } // end inner for
    
    } // end outer for

    // Display the numbers entered into the array

    //Display Largest, Smallest and Average
    printf("\n%d is the largest number in the array", largest);

    return 0;
}