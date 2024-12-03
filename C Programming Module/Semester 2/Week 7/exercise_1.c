/*
This code is used to testing if the strings are the same and the frequency of the word is

Author: Bartosz Sobiegraj

Date:07/03/2024
*/

#include <stdio.h>
#include <string.h>

#define SIZE 100 //symbolic name

void vowel(char[]);
void reverse(char[]);
void connect(char[]);

int main()
{
    char input[SIZE]; //assigning variables


    puts("Please enter a sentence to compare: "); //getting user data
    fgets(input, SIZE, stdin);

    input[strlen(input) - 1] = '\0'; //removing the next line character

    //calling functions
    vowel(input);
    reverse(input);
    connect(input);

    return 0;
}

void vowel(char test[])
{
    int i; //assigning variables
    int counter = 0;


    for (i = 0; i < SIZE; i++)
    {
        if (test[i] == 'e' || test[i] == 'i' || test[i] == 'o' || test[i] == 'u' || test[i] == 'a') //testing string normally with is
        {
            counter++;
        } // end else if
    } // end for loop

    printf("\nThe amount of vowels in the sentence is: %d\n", counter); //prints results
}

void reverse(char test[])
{
    int i = strlen(test);
    int n = i;
    int j = 0;
    char rev[i + 1];

    for (j = 0; j <= i; j++)
    {
        rev[j] = test[i - j - 1];
        
    }
    rev[j] = '\0';
    puts(rev);
}

void connect(char test[])
{
    char sentence[40] = "I entered the string ";

    strcat(sentence,test);

    puts(sentence);
}