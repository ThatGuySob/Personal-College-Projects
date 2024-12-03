#include <stdio.h>
#include <stdlib.h>

int main() {
    int setSize;
    char *ptr;
    
    // Ask the user to enter the size of the set of letters
    printf("Enter the size of the set of letters: ");
    scanf("%d", &setSize);

    // Allocate memory dynamically for the set of letters
    ptr = calloc(setSize, sizeof(char));
    while (1)
    {
        // Ask the user to enter the set of letters
        printf("Enter the set of letters (all lowercase): ");
        scanf("%s", ptr);

        // Count the number of vowels in the set of letters
        int vowelCount = 0;
        for (int i = 0; i < setSize; i++) {
            switch (ptr[i]) {
                case 'a':
                case 'e':
                case 'i':
                case 'o':
                case 'u':
                    vowelCount++;
                    break;
                default:
                    break;
            }
        }

        // Display the number of vowels to standard output
        printf("Number of vowels in the set of letters: %d\n", vowelCount);

        printf("would you like to extend the size?(type 0 if no): ");
        scanf("%d", &setSize);
        if (setSize == 0)
        {
            break;
        }
        else
        {
            ptr = realloc(ptr, setSize * sizeof(char));
        }
    }
    // Free the dynamically allocated memory
    free(ptr);

    return 0;
}
