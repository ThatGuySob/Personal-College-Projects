/*
This code is used to 

Author: Bartosz Sobiegraj

Date:20/11/2023
*/

#include <stdio.h>
int main()
{
    int data[4][6] = { {3, 2, 5, 7, 4, 2},
                       {1, 4, 4, 8, 13, 1},
                       {9, 1, 0, 2, 0, 0},
                       {0, 2, 6, 3, -1, -8}
    };          

    // declare the sum
    int i, j;
    int sum;

    sum = 0;

    // compute the sum
    for ( i=0; i < 4; i++)
    {
        for ( j=0; j < 6; j++)
        {
            sum = sum + data[i][j];
        }
    }
    // display the sum
    printf("\nSum is %d", sum);
    return 0;
}