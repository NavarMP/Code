//append 2 arrays

#include <stdio.h>

int main () {

    printf ("append 2 arrays\n");

    const int maxSize = 10;

    int a[maxSize], b[maxSize], merged[maxSize*2], aSize, bSize;

    printf ("Enter first array size (max size: %d): ", maxSize);
    scanf ("%d", &aSize);
    
    if (aSize < 1 || aSize > maxSize) {
    	printf ("Invalid input. Exiting...");
    	return 1;
	}
	
	readArr (a, aSize);
    
    printf ("Enter second array size (max size: %d): ", maxSize);
    scanf ("%d", &bSize);
    
    if (bSize < 1 || bSize > maxSize) {
    	printf ("Invalid input. Exiting...");
    	return 1;
	}
	
	readArr (b, bSize);
	
	mergeArr (a, b, mergeArr, aSize, bSize);
	
	printf ("Merged Array: ");
	printArr (mergeArr, aSize + bSize);
	
	return 0;
}

void readArr (int arr[], int size) {
	int i;
	for (i = 0; i < size; i++) {
		scanf ("%d", &arr[i]);
	}
	printf ("\n");
	
	return;
}

void mergeArr() {
	int i;
	
	//copy 1st array to merged array
	for (i = 0; i < aSize; i++) {
		mergeArr [i] = a[i];
	}
	
	//copy 2nd array to merged Array
	for (i = 0; j = aSize; j < aSize + bSize; i++, j++) {
		mergeArr[j] = b[i];
	}
}

void printArr() {
	
}
