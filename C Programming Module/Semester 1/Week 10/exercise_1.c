/*
This code is used for taking in three array but the first two are used as the elements for array three

Author: Bartosz Sobiegraj

Date:20/11/2023
*/

#include <stdio.h>

#define ROW 2
#define COL 2

int main()
{
    int array1[ROW][COL];
    int array2[ROW][COL];
    int array3[ROW][COL];
    int i, j;


    printf("Enter %d numbers for the first array\n", ROW*COL);
    // Enter data into the array
    for(i = 0; i < ROW; i++)
    {
    // Inner for that checks columns
        for(j = 0; j < COL; j++)
        {
            // read in data for array1
            scanf("%d", &array1[i][j]);


        } // end inner for
    
    } // end outer for

    printf("Enter %d numbers for the second array\n", ROW*COL);

    for(i = 0; i < ROW; i++)
    {
    // Inner for that checks columns
        for(j = 0; j < COL; j++)
        {
            // read in data for array2
            scanf("%d", &array2[i][j]);


        } // end inner for
    
    } // end outer for

    for(i = 0; i < ROW; i++)
    {
    // Inner for that checks columns
        for(j = 0; j < COL; j++)
        {
            // arthimetic for getting the elements in array3 by multiplying array1 and array2
            array3[i][j] = (array1[i][j])*(array2[i][j]);

        } // end inner for
    
    } // end outer for

    printf("\nThe first array contains:");
        // Display the numbers entered into the second array
    for(i = 0; i < ROW; i++)
    {
        // // Inner for that checks columns
        for(j = 0; j < COL; j++)
        {
            // display the data
            printf("\nRow is %d, Col is %d contains %d", i, j, array1[i][j]);
        } // end inner for

    } // end outer for

    printf("\nThe second array contains:");
        // Display the numbers entered into the second array
    for(i = 0; i < ROW; i++)
    {
        // // Inner for that checks columns
        for(j = 0; j < COL; j++)
        {
            // display the data
            printf("\nRow is %d, Col is %d contains %d", i, j, array2[i][j]);
        } // end inner for

    } // end outer for

    printf("\nThe third array contains:");
        // Display the numbers entered into the third array
    for(i = 0; i < ROW; i++)
    {
        // // Inner for that checks columns
        for(j = 0; j < COL; j++)
        {
            // display the data
            printf("\nRow is %d, Col is %d contains %d", i, j, array3[i][j]);
        } // end inner for

    } // end outer for

    return 0;
}