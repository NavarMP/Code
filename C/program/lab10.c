//Location of a given number in an array

#include <stdio.h>

/**
 * Performs a linear search on an array to find the index of a target value.
 *
 * @param arr    The array to search.
 * @param n      The number of elements in the array.
 * @param target The value to search for.
 *
 * @return The index of the target value if found, -1 otherwise.
 */
int linearSearch(int arr[], int n, int target) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            return i; // Return the index if the target is found
        } 
    }
    return -1; // Return -1 if the target is not found
}

int main() {
    printf ("Find location of a given number in an array\n");

    int n;
    printf("Enter number of elements: ") ;
    scanf("%d",&n);

    int arr[n];
    printf("Enter elements: ");
    for(int i = 0; i < n; i++) {
        scanf("%d",&arr[i]);
    }

    int search;
    printf("Enter number to be search: \n");
    scanf("%d",&search);

    int result = linearSearch(arr, n, search);

    if (result == -1) {
        printf("Element not found\n");
    } else {
        printf("Element found at index %d\n", result);
    }

    return 0;
}
