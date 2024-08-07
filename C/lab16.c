//Factorial of a number using recursion

#include <stdio.h>

/**
 * Calculates the factorial of a given integer using recursion.
 *
 * @param n The input integer.
 * @return The factorial of n.
 */

long long factorial(int n) {
    if (n < 0) {
        printf ("Error: Factorial is not defined for negative numbers.\n");
        return -1;
    } else if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial (n - 1);
    }
}

int main () {
    printf ("Find factorial of a number using recursion\n");

    int num;
    printf ("Enter a non-negative integer: ");
    scanf ("%d", &num);

    long long result = factorial (num);
    if (result != -1) {
        printf ("Factorial of %d = %lld\n", num, result);
    }
    
    return 0;
}