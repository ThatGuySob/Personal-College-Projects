/*
This code is used to display the Fibonacci sequence to the user to a specified request until the user stops the code

Author: Bartosz Sobiegraj

Date:27/11/2023
*/

#include <stdio.h>
int main()
{
    int user; // Assigning Variable Types
    int fibonacci[20];
    int i;
    int temp;
    int fib_seq;
    int end;


    // Welcoming user
    printf("Welcome to the Fibonacci series program\n");

    // Part 4
    for (end = 1; end == 1;) // Start For loop for continuously running the code
    {
        fib_seq = 0; // Assigning variable contents so that the loop works more than once
        temp = 1;

        printf("\nEnter your selection:\n1. Enter the number of terms to calculate in the sequence and display\n2. End program\n");
        scanf("%d", &end); // Taking user input for ending or continuing the loop
        if (end != 1) // If statement for ending loop based on users demand
        {
            break;
        } // End If

        // Part 1
        printf("How many terms of the Fibonacci Sequence do you want to display (max 20): \n");
        scanf("%d", &user); //take user input for amount of terms in the fibonacci sequence

        // Part 2
        for(i = 0; i < user; i++) // Start For loop for the fibonacci sequence
        { 
            // Arthimetic for calculating the Fibonacci Sequence
            fibonacci[i] = fib_seq;
            fib_seq = fib_seq + temp;
            temp = fibonacci[i];
        } // End inner loop

        // Part 3
        printf("The first %d terms of the fibonacci sequence are: \n", user);

        for(i = 0; i < user; i++) // Start For loop for displaying fibonacci array
        { 
            printf("Term %d of fibonacci is: %d\n", (i+1), fibonacci[i]);
        } // End inner loop
    
    } // End outer loop

    // End of user input and farewell
    printf("\nThank you for particapting!");

    return 0;
}