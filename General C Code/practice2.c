#include <stdio.h>

#define NUM_STUDENTS 10

int main() {
    // (a) Define the one-dimensional integer array called CS_students
    int CS_students[NUM_STUDENTS];

    // (b) (i) Enter the ages of the students into the CS_students array using pointer notation
    printf("Enter the ages of %d students:\n", NUM_STUDENTS);
    int *ptr = CS_students; // Pointer to the start of the array
    for (int i = 0; i < NUM_STUDENTS; i++) {
        scanf("%d", ptr + i);
    }

    // (b) (ii) Calculate the average age of the students
    int sum = 0;
    for (int i = 0; i < NUM_STUDENTS; i++) {
        sum += *(ptr + i);
    }
    float average = (float)sum / NUM_STUDENTS;

    // Display the average age to standard output
    printf("Average age of the students: %.2f\n", average);

    // (b) (iii) Find the youngest and oldest age in the class
    int youngest = *ptr, oldest = *ptr;
    for (int i = 1; i < NUM_STUDENTS; i++) {
        if (*(ptr + i) < youngest) {
            youngest = *(ptr + i);
        }
        if (*(ptr + i) > oldest) {
            oldest = *(ptr + i);
        }
    }

    // Display the youngest and oldest ages to standard output
    printf("Youngest age in the class: %d\n", youngest);
    printf("Oldest age in the class: %d\n", oldest);

    // (b) (iv) Display all the ages in the array to standard output
    printf("Ages of the students:\n");
    for (int i = 0; i < NUM_STUDENTS; i++) {
        printf("%d ", *(ptr + i));
    }
    printf("\n");

    return 0;
}