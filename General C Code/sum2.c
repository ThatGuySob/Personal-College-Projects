#include <stdio.h>
#include <stdlib.h>


int compare(const void *a, const void *b)
{
    return (*(int*)a - *(int*)b);
}


int countPairsWithZeroSum(int arr[], int n) {
    // Sort the array
    qsort(arr, n, sizeof(int), compare);

    int left = 0, right = n - 1;
    int count = 0;

    while (left < right) {
        
        if (arr[left] + arr[right] == 0) {
            count++;
            left++;
            right--;
        }

        else if (arr[left] + arr[right] < 0) {
            left++;
        }

        else {
            right--;
        }
    }

    return count;
}

int main() {
    int arr[6];
    printf("Enter 6 numbers: ");
    for (int i = 0; i < 6; i++) {
        scanf("%d", &arr[i]);
    }

    int pairs = countPairsWithZeroSum(arr, 6);
    printf("Number of pairs that sum to zero: %d\n", pairs);

    return 0;
}