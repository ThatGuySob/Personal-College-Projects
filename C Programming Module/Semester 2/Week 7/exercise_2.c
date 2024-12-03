/*
This code is used to testing if the strings are the same and the frequency of the word is

Author: Bartosz Sobiegraj

Date:07/03/2024
*/

#include <stdio.h>
#include <string.h>

#define SIZE 100 //symbolic name

void compare(char[]);
void frequency(char[]);

int main()
{
    char input[SIZE]; //assigning variables


    puts("Please enter a sentence to compare: "); //getting user data
    fgets(input, SIZE, stdin);

    input[strlen(input) - 1] = '\0'; //removing the next line character

    //calling functions
    compare(input);

    frequency(input);

    return 0;
}

void compare(char test[])
{
    char teststr[] = {"Hello World"}; //string thats being compared
    int result = 0;


    result = strcmp(test, teststr); //compares user string to the testing string

    if(result == 0)
    {
        printf("\nStrings are the same");
    } // end if
    else
    {
        printf("\nIts a different string");
    } // end else
}

void frequency(char test[])
{
    int i; //assigning variables
    int counter = 0;


    for (i = 0; i < SIZE; i++)
    {
        if (test[i] == 'i' && test[i + 1] == 's' && test[i + 2] == ' ' && i == 0) //testing string normally with is
        {
            counter++;
        } // end else if

        else if (test[i - 1] == ' ' && test[i] == 'i' && test[i + 1] == 's' && test[i + 2] == ' ') //testing string with making sure it can also start with is
        {
            counter++;
        } //end else if 

        else if (test[i] == 'i' && test[i + 1] == 's' && i == (strlen(test) - 2)) //testing multiple is in the string 
        {
            counter++;
        } //end else if
    } // end for loop

    printf("\nThe Amount of 'is' in the sentence is: %d", counter); //prints results
    
}