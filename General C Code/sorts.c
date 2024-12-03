/*
This code is used for bubble sorting

Author: Bartosz Sobiegraj

Date:27/02/2024
*/

#include <stdio.h>

void bubbleSort(int [], int);

int main()
{
    int array[] = { 4, 6, 1, 2 };
    int num = sizeof(array) / sizeof(array[0]);

    bubbleSort(array, num);
    printf("\nSorted array: \n");

    for (int i = 0; i < num; i++) 
    {
        printf("%d", array[i]);
    }
    
    return 0;
}

void bubbleSort(int sort[], int amount)
{
    int i, j;
    int temp = 0;
    int counter = 0;


    for (i = 0; i < amount - 1; i++) {
        
        for (j = 0; j < amount - i - 1; j++) {
            if (sort[j] > sort[j + 1]) 
            {
                temp = sort[j];
                sort[j] = sort[j + 1];
                sort[j + 1] = temp;
                counter++;
            }
        }
        counter++;
    }
    printf("\nthe count is %d", counter);
}
 