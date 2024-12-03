/*
This code is used to open two seperate files, retrieving the text 
within them and copying them over and then comparing and displaying the differences

Author: Bartosz Sobiegraj

Date:18/04/2024
*/

#include <stdio.h>
#include <string.h>

#define SIZE 50

int main()
{
    //create file pointers to a file
    FILE *fp1;
    FILE *fp2;

    //creating strings to keep the file text in
    char oneline[SIZE];
    char oneline2[SIZE];


    //open the file called file.txt for reading
    fp1 = fopen("file1.txt", "r");
    fp2 = fopen("file2.txt", "r");

    // Check if the file was opened successfully
    if(fp1 == NULL && fp2 == NULL)
    {
        printf("Files did not opened");
    } // end if
    else
    {
        //retrieving the characters from both next file
        while (fgets(oneline, SIZE, fp1) != NULL && fgets(oneline2, SIZE, fp2) != NULL)
        {
            if (strcmp(oneline, oneline2) == 0) //comparing whether the lines are the same and do so for each line
            {
                printf("The line is the same = %s", oneline);
                printf("The line is the same = %s", oneline2);
            } //end if
            else //comparing whether the lines are the same and do so for each line
            {
                printf("The line is not the same = %s \n", oneline);
                printf("The line is not the same = %s \n", oneline2);
            } //end else
        }
        //close the files after finishing using them
        fclose(fp1);
        fclose(fp2);
    } // end else

    return 0;
}