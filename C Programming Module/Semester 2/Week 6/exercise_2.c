/*
This code is used to compare, concatenate and measure the length of strings

Author: Bartosz Sobiegraj

Date:29/02/2024
*/

#include <stdio.h>
#include <string.h> // string library

#define SIZE 50
//create symbolic name

char connect(char[], char[]);
void cal(char[]);
//create function signatures

int main()
{
    char word1[SIZE]; 
    char phrase[] = "My sentence is: " ;
    int result = 0;
    char fullphrase[SIZE];

    puts("please enter a sentence: ");
    fgets(word1, SIZE, stdin);

    cal(word1);

    fullphrase[SIZE] = connect(word1, phrase); //connecting string functuon 


    return 0;
}

char connect(char arr[], char arrp[]) //concatenating strings
{
    strcat(arrp, arr);
    printf("\n%s", arrp);
    return arrp;
}

void cal(char arr[])
{
    int result = strlen(arr) - 1; //calculates length

    printf("%d", result);
}