/*
This code is used to 

Author: Bartosz Sobiegraj

Date:23/10/2023
*/

#include <stdio.h>

#define SIZE 3

int main(){
    int celsius[SIZE];
    int farenheit[SIZE]; 
    int i;

    printf("Enter a temperature in fahrenheit\n");
    for(i = 0; i < SIZE; i++){
        printf("Entered value:"); 
        scanf("%d", &farenheit[i]); 
    } 

    for(i = 0; i < SIZE; i++) 
    { 
        celsius[i] = (farenheit[i]-32.0)*(5.0/9.0);
        
        printf("\nFarenheit: %d Celsius: %d ", farenheit[i],celsius[i]);
    } //end loop
    return 0;
}