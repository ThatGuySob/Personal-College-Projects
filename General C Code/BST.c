/*
This code is used for selection sorting

Author: Bartosz Sobiegraj

Date:27/02/2024
*/

#include <stdio.h>
#include <stdlib.h>

// Define the structure for a node
struct Node
{
    int data;
    struct Node* Left;
    struct Node* Right;
};

struct Node* root = NULL;

// Function to create a new node
struct Node* createnew(int data) 
    {
    struct Node* new = (struct Node*)malloc(sizeof(struct Node));
    if (new == NULL) 
    {
        exit(1);
    }
    new->data = data;
    new->Left = NULL;
    new->Right = NULL;

    return new;
}

int main() {
    // Create a new node with data 10
    struct Node* new = createNode(10);

    // Accessing and printing the data in the node
    printf("Data in the node: %d\n", new->data);

    // Don't forget to free the allocated memory
    free(new);

    return 0;
}
