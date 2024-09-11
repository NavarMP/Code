// Write odd and even numbers into two files

#include <stdio.h>
#include <stdlib.h>

#define NUMBERS 10

// Function to write numbers to a file
void write_numbers_to_file(const char *filename, int numbers[], int count) {
    FILE *fp = fopen(filename, "w");
    if (fp == NULL) {
        perror("Error opening file for writing");
        exit(EXIT_FAILURE);
    }

    for (int i = 0; i < count; i++) {
        putw(numbers[i], fp);
    }

    fclose(fp);
}

// Function to read numbers from a file and print them
void print_numbers_from_file(const char *filename) {
    FILE *fp = fopen(filename, "r");
    if (fp == NULL) {
        perror("Error opening file for reading");
        exit(EXIT_FAILURE);
    }

    int c;
    while ((c = getw(fp)) != EOF) {
        printf("%4d", c);
    }
    printf("\n");

    fclose(fp);
}

int main() {
    printf("Write odd and even numbers into two files\n");

    int numbers[NUMBERS];
    printf("Enter %d numbers: ", NUMBERS);
    for (int i = 0; i < NUMBERS; i++) {
        scanf("%d", &numbers[i]);
    }

    // Write numbers to data file
    write_numbers_to_file("data.txt", numbers, NUMBERS);

    // Separate numbers into even and odd files
    FILE *fp_data = fopen("data.txt", "r");
    if (fp_data == NULL) {
        perror("Error opening data file for reading");
        exit(EXIT_FAILURE);
    }

    FILE *fp_even = fopen("even.txt", "w");
    if (fp_even == NULL) {
        perror("Error opening even file for writing");
        exit(EXIT_FAILURE);
    }

    FILE *fp_odd = fopen("odd.txt", "w");
    if (fp_odd == NULL) {
        perror("Error opening odd file for writing");
        exit(EXIT_FAILURE);
    }

    int c;
    while ((c = getw(fp_data)) != EOF) {
        if (c % 2 == 0) {
            putw(c, fp_even);
        } else {
            putw(c, fp_odd);
        }
    }

    fclose(fp_data);
    fclose(fp_even);
    fclose(fp_odd);

    // Print numbers from even and odd files
    printf("Even numbers:\n");
    print_numbers_from_file("even.txt");

    printf("Odd numbers:\n");
    print_numbers_from_file("odd.txt");

    return 0;
}
