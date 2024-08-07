//Evaluate 1+x+x^2/2! +x^3/3! +…………+x^n /n!

#include <stdio.h>

int main() {
    printf ("Evaluate 1+x+x^2/2! +x^3/3! +…………+x^n /n!\n");

    float x;
    int n;
    printf("Input the value of x: ");
    scanf("%f", &x);
    printf("Input number of terms: ");
    scanf("%d", &n);

    float sum = 1.0, term = 1.0;
    int i;

    for (i = 1; i < n; i++) {
        term *= x / (float)i;
        sum += term;
    }

    printf("\nThe sum is %f\n", sum);

    return 0;
}