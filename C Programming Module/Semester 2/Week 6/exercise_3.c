/*
This code is used to compare, concatenate and measure the length of strings

Author: Bartosz Sobiegraj

Date:29/02/2024
*/

#include <stdio.h>
#include <string.h> // string library

#define SIZE 20
//create symbolic name

void connect(char[], char[]);
void cal(char[]);
//create function signatures

int main()
{
    char word1[SIZE]; 
    char word2[SIZE];
    char phrase[] = "First word entered is " ;
    int result = 0;
    //assign variables

    //request for user input
    puts("please enter two words: ");
    fgets(word1, SIZE, stdin);
    fgets(word2, SIZE, stdin);

    //compare the two strings to see if theyre the same
    result = strcmp(word1, word2);

    if (result == 0) //results for whether the strings are the same or not
    {
        puts("The words are the same");
    } //end if
    else
    {
        puts("The words are not the same");
    }//end else 

    connect(word1, phrase); //connecting string functuon 


    return 0;
}

void connect(char arr[], char arrp[]) //concatenating strings
{
    strcat(arrp, arr);
    printf("\n%s", arrp);
    cal(arrp); //calls calculating string length
}

void cal(char arr[])
{
    int result = strlen(arr) - 1; //calculates length

    printf("%d", result);
}