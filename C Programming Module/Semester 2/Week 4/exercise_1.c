/*
This code is used to 

Author: Bartosz Sobiegraj

Date:01/02/2024
*/

#include <stdio.h>

int square(int);
float circle(float);

float pi = 3.14;

int main()
{
    int sqr;
    float cir;
    int areaSqr;
    float areaCir; 


    printf("Please enter the measurement for the square: ");
    scanf("%d", &sqr);

    printf("Please enter the measurement for the square: ");
    scanf("%f", &cir);

    areaSqr = square(sqr);
    areaCir = circle(cir);

    printf("The area of the square is: %d\n", areaSqr);
    printf("The area of the square is: %.2f", areaCir);
    return 0;
}

int square(int num1)
{
    int area = 0;

    area = num1*num1;

    return area;
}

float circle(float num1)
{
    float area = 0;

    area = pi*(num1*num1);

    return area;
}