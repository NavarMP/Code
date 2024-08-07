//Count of positives , negatives and zeros in a set of n numbers

#include <stdio.h>
#define MAX 50
void count (int arr[], int n, int* pos, int* neg, int* zero) {
    for (int i = 0; i < n; i++) {
        if (arr[i] > 0) {
            (*pos)++;
        } else if (arr[i] < 0) {
            (*neg)++;
        } else {
            (*zero)++;
        }
    }
}
int main() {
    printf ("Count positives, negatives, and zeroes in a set of n numbers\n");

    int n;
    printf ("Enter number of elements (max %d): ",MAX);
    scanf("%d", &n);

    if (n > MAX) {
        printf ("Error: Number of elements exceeds maximum allowed. \n");
        return 1;
    }

    int arr[MAX];
    printf ("Enter array elements: \n");
    for (int i = 0; i < n; i++) {
        scanf ("%d", &arr[i]);
    }

    int pos = 0, neg = 0, zero = 0;
    count (arr, n, &pos, &neg, &zero);


    printf("\nNumber of positive elements: %d\n", pos);
    printf("Number of negative elements: %d\n", neg);
    printf("Number of zeroes: %d", zero);

    return 0;
}