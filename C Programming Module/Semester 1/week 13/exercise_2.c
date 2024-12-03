/*
This code is used for the allocation of memory and then the calculation and display of user input in floating points

Author: Bartosz Sobiegraj

Date:11/12/2023
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //assigning variables
    float *ptr;
    int float_num = 5;
    int num_bytes;
    int i;
    float average = 0; 


    //getting user input for the space for memory allocation
    //printf("\nHow many numbers will you enter?\n"); 
    //scanf("%d", &float_num);

    //calculating the memory block size 
    num_bytes = float_num * sizeof(float);

    //searching for a suitable memory block
    ptr = malloc(num_bytes);

    //checking if the allocation was successful
    if(ptr == NULL)
    {
        printf("\nFailed to allocate memory\n");

        return 0;

    } // end if
    else // memory was allocated successfully
    {

        printf("\nMemory allocated successfully\n");
        printf("\nEnter the set of %d numbers\n", float_num);

        for(i = 0; i < float_num; i++) //getting user input
        {
            scanf("%f", & *(ptr + i));
        } // end for
    
        printf("\nYou entered:\n");

        //display whats inside memory block
        for(i = 0; i < float_num; i++)
        {
            printf("%.2f\n", *(ptr + i));
        } // end for

        //calculating the average 
        for(i = 0; i < float_num; i++)
        {
            average = average + *(ptr + i);
        } // end for

        average = average/float_num; 

        printf("The average of these %d float numbers is %.2f", float_num, average);

        //freeing up allocated memory
        free(ptr);
        
    } // end else
    return 0;
}
