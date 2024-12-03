/*
This code is for the Algorithms assignment which uses data structures to sort, organise, search and create reports for a pharmaceutical company

Author: Bartosz Sobiegraj

Date: 02/04/2024
*/

#include <stdio.h>
#include <stdlib.h>

//assigning symbolic names for easier chaning if necessary
#define TOTAL_LINES 4
#define SIZE 5
#define ISSUETOTAL 20

//assigning structure types for easier use in the future
typedef struct time 
{
  int Day;
  int Hour;
  int Minute;
} time;

typedef struct issue
{
    int issue_code;
    char issue_description[200];
} issue;

typedef struct fixed
{
    int fixed_code;
    char fixed_description[200];
} fixed;

typedef struct line
{
    int LineCode;
    int BatchCode;
    time BatchTime;
    int ID;
    issue issue_info;
	fixed fixed_info;
	int employee;
} line;

typedef struct all_issues
{
    int ID;
    int LineCode;
    int issue_code;
} all_issues;

//creating signatures to not clutter the space above main 

void testdata(line**);
void print_report(line**, int, int);

all_issues* merge(all_issues*, int , all_issues* , int );

void search(all_issues*, int);
void print_final(line**, int, int);

int main()
{
    //assigning variables as well as clarifying the structures
    line line1[SIZE], line2[SIZE], line3[SIZE], line4[SIZE];
	line *product_line[TOTAL_LINES] = {line1, line2, line3, line4};

    //assigning a variable to correspond to the sorted issues list
    all_issues *report;


    testdata(product_line); //entering the test data to work with

    //printing out all necessary tasks with the use of functions
	printf("\nTask 1 - Report based on Date and Time\n");
    print_report(product_line, TOTAL_LINES, SIZE);

    printf("\nTask 2 - Reporting all issues\n");
    print_issue(product_line, TOTAL_LINES, SIZE);

    printf("\nTask 3 - Search Products\n");
    search(report, ISSUETOTAL);

    printf("\nTask 4 - Summary of issues\n");
    print_final(product_line, TOTAL_LINES, SIZE);


    return 0;

}

void testdata(line** product_line) //Double ** is for declaring a doubl pointer or pointer of a pointer so that the data can be more compressed 

{
    //Test data from the pharmaceutical company divided into 4 teams

	// Team 1 Test Data
	product_line[0][0] = (line){1, 101, {03, 18, 27},  47, {179, "Damaged Barcode"}, {109, "Reprinted Barcode"}, 200};
	product_line[0][1] = (line){1, 102, {04, 17, 31}, 55, {162, "Missing Lid"}, {111, "Replaced Lid"}, 201};
	product_line[0][2] = (line){1, 103, {05, 14, 14}, 47, {128, "Cracked Container"}, {122, "Replaced Container"}, 202};
	product_line[0][3] = (line){1, 104, {06, 14, 45}, 53, {192, "Incorrect label"}, {192, "Label Reprinted"}, 203};
	product_line[0][4] = (line){1, 105, {07, 10, 59}, 92, {172, "Power Shortage"}, {172, "Power Restored"}, 204};

	// team 2 Test Data
	product_line[1][0] = (line){2, 201, { 9, 17, 18},  23, {198, "Improper Dosage"}, {193, "Regulated Dosage"}, 252};
	product_line[1][1] = (line){2, 202, {10, 19, 58}, 62, {110, "Incorrect Container"}, {122, "Replaced Container"}, 253};
	product_line[1][2] = (line){2, 203, {11, 18, 12}, 52, {109, "Equipement Failure"}, {123, "Equipment Reset"}, 254};
	product_line[1][3] = (line){2, 204, {12, 10, 51}, 23, {183, "Seal Misplaced"}, {195, "Seal Reapplied"}, 255};
	product_line[1][4] = (line){2, 205, {13, 11, 27},  71, {123, "Missing Label"}, {162, "Applied Label"}, 256};

	// team 3 Test Data
	product_line[2][0] = (line){3, 301, {02, 21, 19}, 28, {138, "System Failure"}, {112, "System Restored"}, 261};
	product_line[2][1] = (line){3, 302, {03, 17, 23}, 74, {123, "Missing Label"}, {162, "Applied Label"}, 262};
	product_line[2][2] = (line){3, 303, {04, 15, 35}, 84, {192, "Incorrect label"}, {192, "Label Reprinted"}, 263};
	product_line[2][3] = (line){3, 304, {05, 19, 01}, 74, {183, "Seal Misplaced"}, {195, "Seal Reapplied"}, 264};
	product_line[2][4] = (line){3, 305, {06, 15, 25}, 30, {128, "Cracked Container"}, {122, "Replaced Container"}, 265};

	// team 4 Test Data
	product_line[3][0] = (line){4, 401, {18, 8, 42},  92, {123, "Missing Label"}, {162, "Applied Label"}, 267};
	product_line[3][1] = (line){4, 402, {19, 19, 30}, 10, {172, "Power Shortage"}, {172, "Power Restored"}, 268};
	product_line[3][2] = (line){4, 403, {20, 14, 50}, 48, {138, "System Failure"}, {112, "System Restored"}, 269};
	product_line[3][3] = (line){4, 404, {21, 18, 22}, 92, {162, "Missing Lid"}, {111, "Replaced Lid"}, 270};
	product_line[3][4] = (line){4, 405, {22, 11, 47}, 12, {109, "Equipement Failure"}, {123, "Equipment Reset"}, 271};
    }
void print_report(line** product_line, int lines, int size) //Double ** is for declaring a doubl pointer or pointer of a pointer so that the data can be more compressed 
{
    int i,j;


	for (int i = 0; i < lines; i++) 
	{
		// Print the entries for the different lines
		printf("\nSorted Line %d\n", i + 1);
		
		for (int j = 0; j < size; j++) 
		{
			// creates a temporary variables for easier printing
			line entry = product_line[i][j];
			
			printf("ID Of Proudct: %d, Issue Code: %d, Day/Hour/Time: %02d/%02d/%02d\n", entry.ID, entry.issue_info.issue_code,
			entry.BatchTime.Day, entry.BatchTime.Hour, entry.BatchTime.Minute);
		}
	}
}
void print_issue(line** product_line, int lines, int size)

{
    int i,j;


	for (int i = 0; i < lines; i++) 
	{
		// Print the entries for the different lines
		printf("\nSorted Line %d\n", i + 1);
		
		for (int j = 0; j < size; j++) 
		{
			// creates a temporary variables for easier printing
			line entry = product_line[i][j];
			
			printf("ID Of Proudct: %d, Line Code: %d, Issue Code: %d\n", entry.ID, entry.LineCode, entry.issue_info.issue_code);
		}
	}
}
all_issues* merge(all_issues* arr1, int size1, all_issues* arr2, int size2) 
{
    int i = 0, j = 0, n = 0;
    int mergedSize = size1 + size2;
    all_issues* mergedArr = (all_issues*)malloc(mergedSize * sizeof(all_issues));

    // Merging
    while (i < size1 && j < size2) 
    {
        if (arr1[i].issue_code < arr2[j].issue_code) 
        {
            mergedArr[n++] = arr1[i++];
        } 
        else
        {
            mergedArr[n++] = arr2[j++];
        }
    }

    // if there are any remnants from array 1, copy them over
    while (i < size1) 
    {
        mergedArr[n++] = arr1[i++];
    }

    // if there are any remnants from array 2, copy them over
    while (j < size2) 
    {
        mergedArr[n++] = arr2[j++];
    }

    return mergedArr; //returns a sorted issue array
}
void search(all_issues* arr, int total) 
{
	int min = 0;
    int max = total - 1;
    int index = -1;
	int product_id; 
	
	printf("Enter an ID of a product to search for: ");
	scanf("%d", &product_id);

	while (min <= max) //condition for the the while loop to run until it finds the designated item
	{
		int mid = min + (max - min) / 2; //finds the mid range 

		if (arr[mid].ID == product_id) //if users input is the same as the element, assign current index
		{
			
			index = mid;
            
			max = mid - 1; 
		}
		
		else if (arr[mid].ID < product_id) min = mid + 1; //if the element didnt match, it checks for if its lowers, if so then it adds 1 to mid
		
		else max = mid - 1;// same as above except inverted
	}
    //prints out the located element as per users request
    printf("ID Of Proudct: %d, Line Code: %d, Issue Code: %d\n",arr[index].ID, arr[index].LineCode, arr[index].issue_code);
}
void print_final(line** product_line, int lines, int size)
{
    int i,j;
    int counter = 0;

	for (int i = 0; i < lines; i++) 
	{
		// Print the entries for the different lines
		printf("\nSorted Line %d\n", i + 1);
		
		for (int j = 0; j < size; j++) 
		{
			// creates a temporary variables for easier printing
			line entry = product_line[i][j];
			
			printf("ID Of Proudct: %d, Issue Code: %d\n", entry.ID, entry.issue_info.issue_code);
            counter++;
		}
	}
    printf("Number of issues across all lines: %d", counter);
}