/*
This code is used to 

Author: Bartosz Sobiegraj

Date:01/02/2024
*/

#include <stdio.h>

#define SIZE 3

void common(char []);

int main()
{
    char user[SIZE];
    int i;

    printf("Please type in %d characters: ", SIZE);

    for (i = 0; i < SIZE; i++)
    {
        scanf(" %c", &user[i]);
        
    }

    common(user);

    return 0;
}

void common(char alpha[])
{
    char most = alpha[0];
    int i;

    for (i = 1; i < SIZE; i++)
    {
        if (alpha[i] == most)
        {
            most = alpha[i];
            printf("The most common character is %c\n", most);
            return;
        }
        else 
        {
            most = alpha[i];
        }

    }

    printf("None of the characters are the same");


}
