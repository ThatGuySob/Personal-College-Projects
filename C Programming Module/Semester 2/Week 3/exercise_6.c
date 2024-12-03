/*
This code is used to show the process of pass by reference

Author: Bartosz Sobiegraj

Date:08/02/2024
*/

#include <stdio.h>

//signature for the function
void increment2(int *number);

int main()
{
    int num = 1; //creating variables


    //call the functiion and pass the address of the variable
    increment2(&num);

    return 0;
}

//function that does passing by reference
void increment2(int *number)
{
    //increment the pointed number by 2
    *number += 2;

    //print the incremented value while dereferencing it
    printf("The Number after passing by reference is %d", *number);
}
