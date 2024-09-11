// 8. 9. Sort a singly linked list

#include <stdio.h>
#include <conio.h>

#define SIZE 5

// Function prototypes
void enQueue(int value);
void deQueue();
void display();

// Circular queue implementation
int cQueue[SIZE];
int front = -1;
int rear = -1;

int main() {
    int choice, value;

    while (1) {
        printf("\n****** MENU ******\n");
        printf("1. Insert\n2. Delete\n3. Display\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("\nEnter the value to be inserted: ");
                scanf("%d", &value);
                enQueue(value);
                break;
            case 2:
                deQueue();
                break;
            case 3:
                display();
                break;
            case 4:
                exit(0);
            default:
                printf("\nPlease select the correct choice!!!\n");
        }
    }

    return 0; // Added return statement
}

void enQueue(int value) {
    if ((front == 0 && rear == SIZE - 1) || (front == rear + 1)) {
        printf("\nCircular Queue is Full! Insertion not possible!!!\n");
    } else {
        if (rear == SIZE - 1 && front != 0) {
            rear = -1;
        }
        cQueue[++rear] = value;
        printf("\nInsertion Success!!!\n");
        if (front == -1) {
            front = 0;
        }
    }
}

void deQueue() {
    // TO DO: implement deQueue function
    printf("\nDequeue not implemented yet!\n");
}

void display() {
    // TO DO: implement display function
    printf("\nDisplay not implemented yet!\n");
}