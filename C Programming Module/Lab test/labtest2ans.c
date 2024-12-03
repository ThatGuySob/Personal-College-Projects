/*
Lab Test 2

Dynamic Memory Allocation (DMA)

This program uses calloc() to dynamically allocate a block of memory, enter data into the memory block, and check for specific details for a set of athletes competing in the Summer Olympic Games. The memory block is freed (released) at the end when the memory block is no longer required.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LENGTH 21

// part 1
struct date
{
    char day[3];
    char month[3];
    char year[5];
};


// part 1 continued
struct athlete
{
    char firstname[LENGTH];
    char surname[LENGTH];
    char nationality[LENGTH];
    struct date DOB;
    float height;
    float weight;
    char event[LENGTH];
};

// functions as required
void enterAthlete(struct athlete *, int);
void checkName(struct athlete *, int);


int main()
{
    struct athlete *ptr;
    int numbers = 0;
    int i;


    // Part 2
    // How many numbers, i.e., data items do you wish to enter
    printf("\nHow many 100m sprint athletes will compete?\n");

    scanf("%d", & numbers);


    // Allocate the block of memory required
    ptr = calloc(numbers, sizeof(struct athlete));

    
    // Check if calloc was successful, i.e., check if the memory was allocated successfully
    if(ptr == NULL)
    {
        printf("\nFailed to allocate memory\n");
    } // end if
    else // memory allocated successfully
    {
        // Part 5
        // memory allocated successfully - go and use it
        printf("\nMemory allocated successfully\n");

        printf("\nEnter the details for the %d athlete(s)\n", numbers);

        // clear the input buffer
        while(getchar() != '\n');

        // enter the details for each athlete
        // part 3
        enterAthlete(ptr, numbers);

        // check if Paddy Jim O'Brien is a competitor
        // part 4
        checkName(ptr, numbers);

        // Free the allocated memory block once finished using it
        free(ptr);

    } // end else

    return 0;

} // end main()


// Function to enter the record details of each 100m sprint participant
//
void enterAthlete(struct athlete *ptr, int numbers)
{
    // Enter athlete details into the allocated memory block
    for(int i = 0; i < numbers; i++)
    {
        printf("\nEnter athlete %d details\n", i+1);

        printf("\nFirstname: ");
        fgets(ptr[i].firstname, LENGTH-1, stdin);

        printf("Surname: ");
        fgets(ptr[i].surname, LENGTH-1, stdin);

        printf("Nationality: ");
        fgets(ptr[i].nationality, LENGTH-1, stdin);

        printf("\nDate of birth format (dd/mm/yyyy)\n");
        fgets(ptr[i].DOB.day, 3, stdin);
        fgets(ptr[i].DOB.month, 3, stdin);

        // clear the input buffer
        while(getchar() != '\n');
        fgets(ptr[i].DOB.year, 5, stdin);

        printf("\nHeight: ");
        scanf("%f", & ptr[i].height);

        printf("Weight: ");
        scanf("%f", & ptr[i].weight);

        // Assign the 100m sprint as the event these athletes will compete - No NEED enter the event
        strcpy(ptr[i].event, "100m sprint");

    } // end for
 
} // end enterAthlete()


// Function to check if any participant is named Paddy Jim O'Brien and is Irish
//
void checkName(struct athlete *ptr, int numbers)
{
    // for each 100m participant
    for(int i = 0; i < numbers; i++)
    {
        // use the strcmp() function to compare the firstname, surname and nationality
        if(strcmp(ptr[i].firstname, "Paddy Jim\n") == 0 && strcmp(ptr[i].surname, "O'Brien\n") == 0 && strcmp(ptr[i].nationality, "Irish\n") == 0)
        {
            printf("\nPaddy Jim O'Brien IS a participant");

            // if Paddy Jim O'Bien IS a participant, end the function immediately and return to where it was called
            return;
        } // end if
    }

    // Otherwise Paddy Jim O'Brien is NOT a participant and function ends
    printf("\nPaddy Jim O'Brien IS NOT a participant");
    
} // end checkName()