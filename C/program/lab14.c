/*
Fill upper triangle with 1, lower triangle with -1 and diagonal elements with
zero in a 2D array
*/

#include <stdio.h>

int main() {
    printf ("Fill upper triangle with 1, lower triangle with -1 and diagonal elements with zero in a 2D array.\n");

    int n;
    printf ("Enter the size of the square matrix: ");
    scanf ("%d", &n);

    int arr[n][n];

    //process
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i < j) {
                arr[i][j] = 1;
            } else if (i > j) {
                arr[i][j] = -1;
            } else {
                arr [i][j] = 0;
            }
        }
    }

    //print
    printf("The resulting matrix is: \n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf ("%d", arr[i][j]);
    }
    printf ("\n");
    }
    
    return 0;
}