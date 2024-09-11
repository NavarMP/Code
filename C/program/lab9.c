//Convert a decimal to new base

#include <stdio.h>

int main() {
    printf ("Convert a decimal to new base\n");

    int decimal, base;
    printf("Enter the decimal number: ");
    scanf("%d", &decimal);
    printf("Enter the new base: ");
    scanf("%d", &base);

    //validate input
    if (base < 2 || base > 36) {
        printf ("Invalid base. Please enter a base between 2 and 36.\n");
        return 1;
    }

    int dig[32], numDig = 0;
    while (decimal > 0) {
        int remainder = decimal % base;
        decimal /= base;
        dig[numDig++] = remainder;
    }

    printf("The decimal number %d in base %d is: ", decimal, base);
    for (int i = numDig - 1; i >= 0; i--) {
        printf("%d", dig[i]);
    }
    printf("\n");
    
    return 0;
}