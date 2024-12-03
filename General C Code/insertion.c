/*
This code is used for insertion sorting

Author: Bartosz Sobiegraj

Date:27/02/2024
*/

#include <stdio.h>

void insertionSort(int [], int);

int main()
{
    int array[] = { 5, 4, 9, 6 };
    int num = sizeof(array) / sizeof(array[0]);
    int i;

    insertionSort(array, num);
    printf("\nSorted array: \n");

     for (i = 0; i < num; i++) 
    {
        printf("%d ", array[i]);
    }
    return 0;
}

void insertionSort(int sort[], int amount)
{
    int i, j;
    int current; 
    int counterloop = 0;
    int counteroper = 0;

    for (i = 1; i < amount; i++) {
        current = sort[i]; 
        j = i - 1;
        counterloop++;

        while (sort[j] > current && j >= 0 )
        {
            sort[j+1] = sort[j];
            j--;
            counterloop++;
        }
        sort[j+1] = current;
        counteroper++;

    }
    
    printf("\nThe counterloop is %d", counterloop);
    printf("\nThe counteroperations is %d", counteroper);
}
