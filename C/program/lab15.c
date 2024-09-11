//Matrix multiplication

#include<stdio.h>
#include<stdlib.h>

#define MAX 10

//read matrix from the user
void readMatrix (int matrix[MAX][MAX], int rows, int cols)  {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf ("Enter element [%d][%d]",i + 1, j + 1);
            scanf ("%d", &matrix[i][j]);
        }
    }
}

//print matrix
void printMatrix (int matrix[MAX][MAX], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf ("%d\t", matrix[i][j]);
        }
        printf ("\n");
    }
}

//multiply 2 matrices
void multMatrix (int a [MAX][MAX], int b[MAX][MAX], int result[MAX][MAX], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result [i][j] = 0;
            for (int k = 0; k < cols; k++) {
                result [i][j] += a[i][k] * b[k][j];
            }
        }
    }
}
int main(){
    printf ("Find Matrix multiplication\n");

    int a[MAX][MAX], b[MAX][MAX], result[MAX][MAX], rows, cols;
    printf ("Enter the number of rows: \n");
    scanf ("%d", &rows);
    printf ("Enter the number of columns: \n");
    scanf ("%d", &cols);

    //Read first matrix
    printf ("Enter the first matrix elements: \n");
    readMatrix (a, rows, cols);

    //read the second matrix
    printf ("Enter the second matrix elements: \n");
    readMatrix (b, rows, cols);

    //multiply matrices
    multMatrix (a, b, result, rows, cols);

    //print the result
    printf ("Result of the matrix multiplication: \n");
    printMatrix (result, rows, cols);
    
    return 0;
}
