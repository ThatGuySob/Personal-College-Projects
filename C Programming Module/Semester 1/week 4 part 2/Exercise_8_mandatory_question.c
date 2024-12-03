/*
This code is used to collect 3 floats and show the sum and average of them

Author: Bartosz Sobiegraj7

Date:09/10/2023
*/

#include <stdio.h>
int main()
{
    float user1; //assigning float variables
    float user2;
    float user3;
    float sum;
    float average;


    //collecting user input
    printf("Enter first float number\n");
    scanf("%f", &user1);

    printf("Enter any float number\n");
    scanf("%f", &user2);
    
    printf("Enter any float number\n");
    scanf("%f", &user3);

    //arithmetic for the sum of all three numbers
    sum = user1 + user2 + user3;

    //arithmetic for the average of all three numbers
    average = sum/3;

    printf("The sum of all three float numbers is %.3f and the average of the three is %.3f", sum, average);

    /*   
    printf("user1 is %.3f\nuser2 is %.3f\nuser3 is %.3f", user1, user2, user3); 
    Code used for testing the variables 
    */  

    return 0;
}