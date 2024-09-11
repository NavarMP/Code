//nth Fibonacci number

#include<stdio.h>

int fib(int n) {
    //Error input
    if (n < 0) {
        printf ("Error: n must be a non-negative integer.\n");
        return -1; //Return an error code
    }

    if (n == 0 || n == 1) {
        return n; //base cases
    }

    int a = 0, b = 1, c, i;
    for (i = 2; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}
int main() {
    printf ("Find nth fibonacci number\n");
    int n;

    printf("Enter a non-negative integer: ");
    scanf("%d", &n);

    if (fib(n) != -1) {
        printf("\nThe %dth Fibonacci number is %d", n, fib(n));
    }

    return 0;
}