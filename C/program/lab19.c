//length of a string using pointers

#include <stdio.h>

size_t stringLength(const char *str) {
    size_t length = 0;
    while (*str != '\0') { // Loop until the null terminator
        length++;
        str++; // Move to the next character
    }
    return length;
}

int main() {
    char input[100];

    // Ask the user for the string input
    printf("Enter a string: ");
    fgets(input, sizeof(input), stdin); // Read the string safely

    // Calculate and display the string length
    printf("Length of the string: %zu\n", stringLength(input));

    return 0;
}