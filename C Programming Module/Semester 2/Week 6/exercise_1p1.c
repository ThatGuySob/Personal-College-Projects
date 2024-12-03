/*
This code is used to 

Author: Bartosz Sobiegraj

Date:01/02/2024
*/

#include <stdio.h>
#include <string.h>

#define SIZE 20
#define AMOUNT 10

int main()
{
    char word1[SIZE]; 
    char word2[SIZE][AMOUNT] = { "john", "mark", "eric", "ryan", "blessing", "muhammed" };
    int result = 1;
    int i;
    //assign variables

    //request for user input
    puts("please enter a name: ");
    fgets(word1, SIZE, stdin);


    if (word1[strlen(word1) - 1] == '\n') 
    {
        word1[strlen(word1) - 1] = '\0';
    }
    //compare the two strings to see if theyre the same
    result = strcmp(word1, word2[i]);

    for (i = 0; i < AMOUNT; i++)
    {
        if (strcmp(word1, word2[i]) == 0 )
        {
            
            result = 0;
            break;
        }
    }

    if (result == 0) //results for whether the strings are the same or not
    {
        puts("Hello");
    } //end if
    else
    {
        puts("There are no names that");
    }//end else 

    return 0;
}