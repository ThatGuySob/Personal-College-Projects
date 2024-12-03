/*
This code is used to 

Author: Bartosz Sobiegraj

Date:14/03/2024
*/

#include <stdio.h>
#include <string.h>

#define SIZE 25
#define NUM 2

struct date
{
    int day;
    int month;
    int year;
};

struct person
{
    char firstname[SIZE];
    char surname[SIZE];
    struct date DOB;
    int height;
    int weight;
    char eye_colour[SIZE];
    char citizenship[SIZE];
};



void display(struct person);

int main()
{
    int i;
    int userdata = 0;


    struct person person1;
    struct person person2;
    
    for(i = 0; i < NUM; i++)
    {
        while(getchar() != '\n');
        printf("Enter first name:\n");
        fgets(person1.firstname, SIZE - 1, stdin);

        while(getchar() != '\n');
        printf("\nEnter surname:\n");
        fgets(person1.surname, SIZE - 1, stdin);

        printf("\nEnter date of birth: \n");
        printf("(order: day, month, year)\n");
        scanf("%d", & person1.DOB.day);
        scanf("%d", & person1.DOB.month);
        scanf("%d", & person1.DOB.year);

        printf("\nEnter height(CM): \n");
        scanf("%d", & person1.height);

        printf("\nEnter weight(KG): \n");
        scanf("%d", & person1.weight);

        while(getchar() != '\n');
        printf("\nEnter eye Colour:\n");
        fgets(person1.eye_colour, SIZE - 1, stdin);

        while(getchar() != '\n');
        printf("\nEnter Country of Citizenship:\n");
        fgets(person1.citizenship, SIZE - 1, stdin);

        printf("Would you like to enter the data from person %d to person %d?\n1 for yes\n0 for no\n", i+1, i+2);
        scanf("%d", & userdata); 
        
        break;

    } // end for

    person2 = person1;
    
    printf("Which Persons data would you like to display?");
    scanf("%d", & userdata); 

    display(person2);

    return 0;
}

void display(struct person bio) 
{

    // prints student record
    printf("\t**Personal data**\n");
    printf("Name: %s %s \nDate of birth:%d/%d/%d \nHeight: %d \nWeight %d \n Eye colour: %s, \nCitizenship: %s", bio.firstname, bio.surname, bio.DOB.day, bio.DOB.month, bio.DOB.year, bio.height, bio.weight, bio.eye_colour, bio.citizenship);
}