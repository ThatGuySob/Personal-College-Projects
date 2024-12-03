/*
This code is used to check whether the inputted character is a consonant or vowel

Author: Bartosz Sobiegraj

Date:16/10/2023
*/

#include <stdio.h>
int main()
{
    char letter; //assigning variable types


    printf("Enter a character from the alphabet\n");  
    scanf("%c", &letter);  //collecting user input

    // switch statement to check whether its a vowel or a consonant
    switch(letter)  
    {  // if the3 character entered is a vowel
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':  
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':             
        {  //display that its a vowel
            printf("\nThe Letter you put in %c is a vowel ", letter);
            break;  
        } // end case 'a'  

        // if the character entered is NOT a vowel
        default:  
        {  
            printf("\nThe Letter you put in %c is a consonant", letter); 
            break;  
        } // end default  

    } // end switch  

    return 0;
}