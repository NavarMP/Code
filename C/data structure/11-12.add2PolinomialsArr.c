//11. 12.Addition of 2 polynomials using array

#include <stdio.h>

// Function to add two polynomials
void addPolynomials(int poly1[], int poly2[], int degree1, int degree2, int result[]) {
    int i, maxDegree;
    maxDegree = (degree1 > degree2) ? degree1 : degree2;
    for (i = 0; i <= maxDegree; i++) {
        result[i] = (i <= degree1 ? poly1[i] : 0) + (i <= degree2 ? poly2[i] : 0);
    }
}

// Function to print a polynomial
void printPolynomial(int poly[], int degree) {
    int i;
    for (i = degree; i >= 0; i--) {
        if (poly[i] != 0) {
            if (i > 1) {
                printf("%dx^%d + ", poly[i], i);
            } else if (i == 1) {
                printf("%dx + ", poly[i]);
            } else {
                printf("%d", poly[i]);
            }
        }
    }
    printf("\n");
}

int main() {
    int poly1[] = {3, 2, 1}; // represents 1x^2 + 2x + 3
    int poly2[] = {2, 4}; // represents 4x + 2
    int degree1 = sizeof(poly1) / sizeof(poly1[0]) - 1;
    int degree2 = sizeof(poly2) / sizeof(poly2[0]) - 1;
    int result[degree1 > degree2 ? degree1 + 1 : degree2 + 1];

    printf("Polynomial 1: ");
    printPolynomial(poly1, degree1);
    printf("Polynomial 2: ");
    printPolynomial(poly2, degree2);

    addPolynomials(poly1, poly2, degree1, degree2, result);
    printf("Result: ");
    printPolynomial(result, (degree1 > degree2) ? degree1 : degree2);

    return 0;
}