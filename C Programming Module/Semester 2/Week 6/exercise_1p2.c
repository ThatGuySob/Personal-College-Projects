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
    char country[SIZE][AMOUNT] = { "Australia", "Belgium", "China", "Denmark", "England", "France", "Greece", "Ireland", "Scotland", "Wales" };
    char capital[SIZE][AMOUNT] = {"Canberra", "Brussels", "Beijing", "Copenhagen", "London", "Paris", "Athens", "Dublin", "Edinburgh", "Cardiff" };
    int result = 1;
    int i;
    int cur;
    //assign variables

    //request for user input
    puts("please choose a country");
    for (i = 0; i < AMOUNT; i++)
    {
        puts(country[i]);
    }
    fgets(word1, SIZE, stdin);


    if (word1[strlen(word1) - 1] == '\n') 
    {
        word1[strlen(word1) - 1] = '\0';
    }
    //compare the two strings to see if theyre the same

    for (i = 0; i < AMOUNT; i++)
    {
        if (strcmp(word1, country[i]) == 0 )
        {
            cur = i;
            result = 0;
            break;
        }
    }
    puts(capital[cur]);

    return 0;
}