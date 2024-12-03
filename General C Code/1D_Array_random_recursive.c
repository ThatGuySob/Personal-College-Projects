/*
This code is used to get a nth number from the fibonacci sequence

Author: Bartosz Sobiegraj

Date:06/02/2024
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int comparison(int x);

int main()
{
    int start_time = clock();
    int end_time;
    int *ptr;
    int *ptr2;
    int numbers;
    int numbers2;
    int bytes;
    int random;
    int i;
    int j;
    int count = 0;


    printf("\nHow many numbers will you enter in M?\n");
    scanf("%d", &numbers);

    printf("\nHow many numbers will you enter in N?\n");
    scanf("%d", &numbers2);

    bytes = numbers * sizeof(int);

    ptr = malloc(bytes);

    bytes = numbers2 * sizeof(int);

    ptr2 = malloc(bytes);

    for(i = 0; i < numbers; i++)
    {
        *(ptr + i) = rand() % (numbers + 1 - 0) + 0;
    }

    for(i = 0; i < numbers; i++)
    {
        *(ptr2 + i) = rand() % (numbers2 + 1 - 0) + 0;
    }

    for(i = 0; i < numbers; i++)
    {
        for(j = 0; j < numbers; j++)
        {
            if (*(ptr + i) == *(ptr2 + j))
            {
                count++;
            }
        }
         
    }

    printf("There are %d occurances where the numbers are the same in both arrays.", count);

    printf("\n");
    end_time = clock();

    printf ("Elapsed time is %1.7lf seconds\n", (double)(end_time-start_time)/CLOCKS_PER_SEC);


    return 0;
    }

int comparison(n)
{   
    if (n == 0 || n == 1)
    {
        return n;
    }
    else
    {
        return comparison(n - 1) + comparison(n - 2);
    }
}

