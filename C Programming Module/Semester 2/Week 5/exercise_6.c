/*
This code is using puts and fgets commands to retrieve  and present data

Author: Bartosz Sobiegraj

Date:22/02/2024
*/

#include <stdio.h>

#define SIZE 20 //symbolic name


int main()

{
    char name[SIZE]; //defining variables
    int i;

    puts("Enter your name: ");

    fgets(name, SIZE, stdin); // retrieving user data

    for(i = 0; i < SIZE; i++)
    {
        putchar(name[i]); //printing user data 
        putchar(' '); //puts a space in between each letter
    }

    return 0;
}