/*
This code is used to record biological data about a person

Author: Bartosz Sobiegraj

Date:21/03/2024
*/

#include <stdio.h>
#include <string.h> //using the string library

#define SIZE 25 //assigning symbolic names
#define NUM 1

struct date //nested structure
{
    int day;
    int month;
    int year;
};

struct person //assigning structures
{
    char firstname[SIZE];
    char surname[SIZE];
    struct date DOB;
    int height;
    int weight;
    char eye_colour[SIZE];
    char citizenship[SIZE];
};



void display(struct person); //function signature

int main()
{
    int i;
    int userdata = 0; //assigning variables


    struct person person1; //declaring the structures within the data set
    struct person person2;
    
    for(i = 0; i < NUM; i++)
    {
        //gathering the bio data user input
        printf("Enter first name:\n");
        fgets(person1.firstname, SIZE - 1, stdin);

        
        printf("Enter surname:\n");
        fgets(person1.surname, SIZE - 1, stdin);

        printf("Enter date of birth: \n");
        printf("(order: day, month, year)\n");
        scanf("%d", & person1.DOB.day);
        scanf("%d", & person1.DOB.month);
        scanf("%d", & person1.DOB.year);

        printf("Enter height(CM): \n");
        scanf("%d", & person1.height);

        printf("Enter weight(KG): \n");
        scanf("%d", & person1.weight);

        
        printf("Enter eye Colour:\n");
        fgets(person1.eye_colour, SIZE - 1, stdin);

        while(getchar() != '\n');
        printf("Enter Country of Citizenship:\n");
        fgets(person1.citizenship, SIZE - 1, stdin);


        display(person1); //using the function to display the bio data



        printf("Would you like to enter the data from person %d to person %d?\n1 for yes\n0 for no\n", i+1, i+2);
        scanf("%d", & userdata); //if user wants to copy one structure to the next

        if (userdata == 1)
        {
            person2 = person1;
        }

        userdata = 0;

        printf("Would you like to modify the data in person %d?\n1 for yes\n0 for no\n", i+2);
        scanf("%d", & userdata); 
        //if user wants to break the program and not modify anything
        if (userdata == 0)
        {
            display(person2);
            return 0;
        }
        
    for(i = 0; i < NUM; i++)
    {
        //entering user data for the second structure as part of modification   
        while(getchar() != '\n');
        printf("Enter first name:\n");
        fgets(person2.firstname, SIZE - 1, stdin);

        //while(getchar() != '\n');
        printf("Enter surname:\n");
        fgets(person2.surname, SIZE - 1, stdin);

        printf("\nEnter date of birth: \n");
        printf("(order: day, month, year)\n");
        scanf("%d", & person2.DOB.day);
        scanf("%d", & person2.DOB.month);
        scanf("%d", & person2.DOB.year);

    } // end for
    
    }
    display(person2); //displaying the second person structure

    return 0;
}

void display(struct person bio) 
{

    // prints biological data recorded above
    printf("\t**Personal data**\n");
    printf("Name: \n%s%sDate of birth:%d/%d/%d \nHeight: %d \nWeight %d \nEye colour: %sCitizenship: %s", bio.firstname, bio.surname, bio.DOB.day, bio.DOB.month, bio.DOB.year, bio.height, bio.weight, bio.eye_colour, bio.citizenship);
}