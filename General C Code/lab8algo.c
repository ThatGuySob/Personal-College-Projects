/*
This code is used to 

Author: Bartosz Sobiegraj

Date:07/03/2024
*/

#include <stdio.h>
#include <stdlib.h>

#define MAX 100
#define COM 200

void insertionSort(int [], int);
void combine(int [], int []);

int main()
{
    int array1[MAX];
    int array2[MAX];
    int array3[COM];
    int i;


    for( i = 0 ; i < MAX ; i++ ) 
    {
        array1[i] = (rand() % MAX);
    }
    for( i = 0 ; i < MAX ; i++ ) 
    {
        array2[i] = (rand() % MAX);
    }

    insertionSort(array1, MAX);
    insertionSort(array2, MAX);

    

    return 0;
}

void insertionSort(int sort[], int amount)
{
    int i, j;
    int current; 


    for (i = 1; i < amount; i++) 
    {
        current = sort[i]; 
        j = i - 1;
    
        while (sort[j] > current && j >= 0 )
        {
            sort[j+1] = sort[j];
            j--;
        }
        sort[j+1] = current;

    }
}

void combine(int merge1[], int merge2[])
{
    int i, j;
    int current; 

    for (i = 1; i < MAX; i++) 
    {
        current = sort[i]; 
        j = i - 1;
    
        while (sort[j] > current && j >= 0 )
        {
            sort[j+1] = sort[j];
            j--;
        }
        sort[j+1] = current;

    }
}