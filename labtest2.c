/*
This code is used to retrieve the amount of qualified athletes and allocate memory correspondingly,
its then used to store various statistics about the athlete like age, name, nationality, height and weight,
lastly it checks whether the assumed World record holder (WRH) paddy jim o'brien is participating

Author: Bartosz Sobiegraj

Date:11/04/2024
*/

#include <stdio.h>
#include <string.h>//used later on for string comparing and string copying
#include <stdlib.h> //necessary for malloc/calloc to operate without throwing any errors

#define SIZE 25 //assigning a symbolic name so numbers can be altered whenever 

struct date //assigning data strucures for storing the athletes data
{
    int day;
    int month;
    int year;
};

struct athlete
{
    char first_name[SIZE];
    char surname[SIZE];
    char nationality[SIZE];
    struct date DOB; //using a nested structure for above instead of creating more variables within this one
    int height;
    int weight;
    char event[SIZE];
};

void athleteData(struct athlete *, int); //providing signatures so that the top space of the code is not too cluttered
void checkWRH(struct athlete *, int);

int main()
{
    struct athlete *ptr; //assigning variables
    int qualified = 0;


    printf("How many athletes qualified for the 100m sprint event: ");
    scanf("%d", &qualified); //getting user input for memory allocation

    ptr = calloc(qualified, sizeof(struct athlete)); //assigning data blocks for necessary for input later on

    if (ptr == NULL)
    {
        printf("\nMemory allocation unsuccessful\n"); //if no contigous allocation can be performed it will fail
    }

    else
    {
        printf("\nMemory allocation successful\n"); 

        athleteData(ptr, qualified); //call both functions
        checkWRH(ptr, qualified);

    }

    return 0; //end of code
}

void athleteData(struct athlete *potr, int amount) //function underneath the main code for better look
{
    int i; //assigning variables


    for(i = 0; i < amount; i++) //for loop for gathering necessary user data
    {
        printf("Please enter Athlete %d's Records: \n", i + 1);

        while(getchar() != '\n'); //clearing input buffer
        printf("Enter First name:\n");
        fgets(potr[i].first_name, SIZE - 1, stdin); //using fgets over scanf for names with spaces
        potr[i].first_name[strlen(potr[i].first_name) - 1] = '\0'; //removing the next space \n character from the string

        printf("Enter Surname:\n");
        fgets(potr[i].surname, SIZE - 1, stdin);
        potr[i].surname[strlen(potr[i].surname) - 1] = '\0'; //removing the next space \n character from the string

        printf("Enter Nationality:\n");
        fgets(potr[i].nationality, SIZE - 1, stdin);
        potr[i].nationality[strlen(potr[i].nationality) - 1] = '\0'; //removing the next space \n character from the string

        printf("Enter Date of Birth(dd/mm/yyyy):\n");
        scanf("%d", & potr[i].DOB.day);
        scanf("%d", & potr[i].DOB.month);
        scanf("%d", & potr[i].DOB.year);


        printf("Enter Height:\n");
        scanf("%d", & potr[i].height);

        printf("Enter Weight:\n");
        scanf("%d", & potr[i].weight);

        strcpy(potr[i].event, "100m Sprint"); //assuming from the information that we're only gathering the 100m sprint event
    } //end for loop
}

void checkWRH(struct athlete *poitr, int number)
{
    int i; //assiging variables


    for (i = 0; i < number; i++)
    {
        //checking for same data using str cmp for both uppercase and lowercase
        if ((strcmp(poitr[i].first_name, "Paddy Jim") == 0 && strcmp(poitr[i].surname, "O'Brien") == 0) || (strcmp(poitr[i].first_name, "paddy jim") == 0 && strcmp(poitr[i].surname, "o'brien") == 0))   
        {
            printf("The current World Record Holder Paddy Jim O'Brien is participating");

            return; 
        } //end if

        else
        {
            printf("The current World Record Holder is absent from the Competition");

            return;
        } //end else
    } //end for loop
}