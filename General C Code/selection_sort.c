/*
This code is used for selection sorting

Author: Bartosz Sobiegraj

Date:27/02/2024
*/

#include <stdio.h>

void selectionSort(int [], int);

int main()
{
    int array[] = { 4, 6, 1, 2 };
    int num = sizeof(array) / sizeof(array[0]);

    selectionSort(array, num);
    printf("\nSorted array: \n");

    for (int i = 0; i < num; i++) 
    {
        printf("%d", array[i]);
    }
    
    return 0;
}

void selectionSort(int sort[], int amount)
{
    int i, j, min;
    int temp; // Temporary variable for swapping
    int counter = 0;
    for (i = 0; i < amount - 1; i++) {
        min = i;

        for (j = i + 1; j < amount; j++) {
            if (sort[j] < sort[min]) {
                min = j;
            }
            counter++;
        }
        counter++;
        // Swap the elements
        temp = sort[min];
        sort[min] = sort[i];
        sort[i] = temp;
    }
    printf("\nthe count is %d", counter);
}
