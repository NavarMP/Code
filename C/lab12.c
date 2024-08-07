//Currency denomination

#include <stdio.h>

int main() {
    printf ("Find currency denomination\n");

    int notes[8] = {500,200,100, 50, 20, 10, 5, 2, 1}, amount, temp;

    printf("Enter the amount: ");
    scanf("%d", &amount);
    temp = amount;
    for (int i = 0; i< 8; i++) {
        printf("\n%d notes: %d", notes[i], temp / notes[i]);
        temp = temp % notes[i];
    }

    return 0;
}