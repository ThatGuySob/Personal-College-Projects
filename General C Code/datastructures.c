/*
This code is used for selection sorting

Author: Bartosz Sobiegraj

Date:27/02/2024
*/
#include <stdio.h>

#define SIZE 50

struct keystrokes
{
    char input[SIZE]
};

int main()
{
    int num;
    int i;
    struct keystrokes keys;

    printf("how many items would you like to input: ");
    scanf("%d", &num);

    while (getchar() != '\n');
    
    for(i = 0; i < num; i++)
    {
        printf("Input random data: ");
        fgets (keys.input, SIZE, stdin);
    }

    for(i = 0; i < num; i++)
    {
        puts(keys.input);
    }

    return 0;
}
