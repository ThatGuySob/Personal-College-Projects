/*
This code is used to demonstrate the volume and surface area of a box and the area of a circle 

Author: Bartosz Sobiegraj

Date:02/10/2023
*/

#include <stdio.h>
int main()
{
    float b_volume = 0; //assigning the data variables for the box
    float b_surface_area = 0;  
    float length = 11.5;
    float height = 10;
    float width = 2.5;

    float c_radius = 4.8; //assigning the data varaibles for the circle
    float pi = 3.14;
    float c_area = 0;


    //Calculations for the box 
    b_volume = length * height * width;
    b_surface_area = 2*(length*width) + 2*(length*height) + 2*(height*width);

    printf("The volume of the box is %f cm cubed\n", b_volume);
    printf("The surface area of the box is %f cm squared", b_surface_area);


    //calculations for the circle
    c_area = pi*c_radius*c_radius;
    
    printf("\nThe area of this circle is %f cm sqaured.", c_area);

    return 0;
}