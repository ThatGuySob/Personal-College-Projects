/*
This code is used to 

Author: Bartosz Sobiegraj

Date:07/03/2024
*/

#include <stdio.h>
int main()
{
    int array[] = {1, 3, 4, 6};
	int N = 3;
	int i = 0;
	int search = 4;


	for (i = 0; i < N; i++)
		if (search == array[i])
		{
        	break;
        }

    printf("the position of %d is %d", search, (i + 1));

    return 0;
}