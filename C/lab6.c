//Display pyramid using *

#include<stdio.h>

void pyramid (int rows) {
    for (int i = 1; i <= rows; i++) {
        //print leading spaces
        for (int j = 0; j < rows - i; j++) {
            printf (" ");
        }

        //Print asterisks
        for (int j = 0; j < 2 * i - 1; j++) {
            printf ("*");
        }
        printf ("\n");
    }
}
int main() {
    printf ("Display pyramid using *\n");

    int rows;
    printf("Enter the number of rows : ");
    scanf("%d",&rows);

    printf("\nPyramid of * with %d rows:\n",rows);
    pyramid (rows);

    return 0;
}
