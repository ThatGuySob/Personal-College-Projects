/*
This code is used to open a file to read it, copy its contents into the main code, everytime
the code encounters a newline character it adds to the counter and prints it before the next line

Author: Bartosz Sobiegraj

Date:18/04/2024
*/

#include <stdio.h>
#include <time.h>

#define SIZE 50

int main()
{
    //create file pointers to a file
    FILE *fp1;
    clock_t time_req;
    
    //creating strings to keep the file text in
    char oneline[SIZE];
    int line_counter = 0;
    

    //open the file called file.txt for reading
    fp1 = fopen("file1.txt", "r");

    // Check if the file was opened successfully
    if(fp1 == NULL)
    {
        printf("Files did not open");
    } // end if
    else
    {
        time_req = clock();
        for (int i = 0; i < 200000; i++) 
        {
        //retrieving the characters from file, everytime it detects a newline character it adds a number
        while (fgets(oneline, SIZE, fp1) != NULL)
        {
            line_counter++;
            printf("%d: %s",line_counter, oneline);
        }
        }

        time_req = clock() - time_req;
        printf("\nProcessor time taken retrieving text: %f", (float)time_req / CLOCKS_PER_SEC);
        //close the files after finishing using them
        fclose(fp1);
    } // end else

    return 0;
}