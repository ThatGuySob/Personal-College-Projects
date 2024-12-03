/*
This code is used to take in user input and run it through various arthimetic calculations until reaching 1

Author: Bartosz Sobiegraj

Date:23/10/2023
*/

#include <stdio.h>
int main()
{
    int number; //assigning Variable types
    int counter; 
    

    counter = 0; //adding a counter for number of steps taken

    do //loop enforcing user to put an appropriate number (2 or higher)
    {
        printf("Enter any Number:  ");  
        scanf("%d", &number);  //collecting user input

        printf("Value entered is %d\n", number);

        //checking if user entered a value equal to or less than 1 otherwise breaking the code
        if (number <= 1) 
        {
            printf("Error! Please try again.\n");
        }
       
    }
    while (number <= 1); 

    while (number != 1) //start loop for arthimetics
    {

        //modulus of user input to see if even
        if (number % 2 == 0)
        {
            //if even the arthimetic divides the number by 2
            number = number/2; 
        }
        else //if odd the arthimetic multiplies the number by 3 and adds 1
        {
            number = (number*3) + 1;
        }
        
        //checks how many steps taken
        counter ++; 

        //if number left is 1, break from the loop
        if (number == 1) 
        {
            break;
        }
        printf("Next value is %d\n", number);

    } //end loop

    //give user results
    printf("Final value %d, number of steps %d", number, counter);


    return 0;
}