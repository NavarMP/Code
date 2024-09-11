//1. 4. Append 2 arrays

#include <stdio.h>

//read array elements
void readArray (int arr[], int size) {
    printf ("Please enter array elements: ");
    for (int i = 0; i < size; i++) {
        scanf ("%d", &arr[i]);
    }
}

//print array elements
void printArray (int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf ("%d\t", arr[i]);
    }
    printf ("\n");
}

//merge 2 arrays
void mergeArrays (int a[], int b[], int merged[], int aSize, int bSize) {
    //copy from 1st array to merged array
    for (int i = 0; i < aSize; i++) {
        merged[i] = a[i];
    }

    //copy from 2nd to merged array
    for (int i = 0, j = aSize; j < aSize + bSize; i++, j++) {
        merged[j] = b[i];
    }
}
int main () {
    printf ("Append two arrays");
    const int maxSize = 10;
    int a[maxSize], b[maxSize], merged[maxSize * 2];
    int aSize, bSize;

    //read size of 1st array
    printf ("Please enter the size of the first array (max %d): ", maxSize);
    scanf ("%d", &aSize);

    //Check validity of size
    if (aSize < 1 || aSize > maxSize) {
        printf ("Invalid size. Exiting...\n");
        return 1;
    }

    //read elements of the 1st array
    readArray (a, aSize);

    //read the size of the 2nd array
    printf ("Please enter the size of the second array (max %d): ", maxSize);
    scanf ("%d", &bSize);

     // Check if the size is valid
    if (bSize < 1 || bSize > maxSize) {
        printf("Invalid size. Exiting...\n");
        return 1;
    }

    // Read the elements of the second array
    readArray(b, bSize);

    // Merge the two arrays
    mergeArrays(a, b, merged, aSize, bSize);

    // Print the merged array
    printf("Merged array elements:\n");
    printArray(merged, aSize + bSize);

    return 0;
}