//Matrix transpose

#include <stdio.h>

#define MAX_ROWS 10
#define MAX_COLS 10

void printMatrix (int matrix [][MAX_COLS], int rows, int cols, const char *message) {
    printf ("%s\n", message);
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            printf ("%d", matrix [i][j]);
        }
    printf ("\n");
    }
}

int main() {
    printf ("Find matrix transpose\n");

    int rows, cols;
    printf("Enter rows and columns: ");
    scanf("%d %d", &rows, &cols);

    if (rows > MAX_ROWS || cols > MAX_COLS) {
        printf ("Error: Matrix size exceeds maximum allowed size (%d x %d)\n", MAX_ROWS, MAX_COLS);
    return 1;
    }

    int matrix [MAX_ROWS][MAX_COLS];
    printf ("\nEnter matrix elements:\n");
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            scanf ("%d", &matrix[i][j]);
        }
    }

    printMatrix(matrix, rows, cols, "Original matrix is: ");

    printf ("\nTranspose of the matrix is: \n");
    for (int i = 0; i < cols; ++i) {
        for (int j = 0; j < rows; ++j) {
            printf ("%d", matrix [j][i]);
        }
        printf ("\n");
    }

    return 0;
}