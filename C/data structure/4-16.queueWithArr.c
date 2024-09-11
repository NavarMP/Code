//4. 16.Queue using array

#include <stdio.h>
#include <conio.h>
#include <stdbool.h>

#define QUEUE_SIZE 10

int queue [QUEUE_SIZE];
int front = -1, rear = -1;

// Function prototypes
void enQueue(int value);
void deQueue();
void display();
int getMenuChoice();
void printMenu();

// Function to add an element to the queue
void enQueue(int value) {
    if (rear == QUEUE_SIZE - 1) {
        printf("Queue is full. Cannot add element %d.\n", value);
        return;
    }
    if (front == -1) {
        front = 0;
    }
    rear++;
    queue[rear] = value;
}

// Function to remove an element from the queue
void deQueue() {
    if (front == -1) {
        printf("Queue is empty. Cannot remove element.\n");
        return;
    }
    printf("Removed element: %d\n", queue[front]);
    front++;
    if (front > rear) {
        front = rear = -1;
    }
}

// Function to display the queue
void display() {
    if (front == -1) {
        printf("Queue is empty.\n");
        return;
    }
    printf("Queue elements: ");
    for (int i = front; i <= rear; i++) {
        printf("%d ", queue[i]);
    }
    printf("\n");
}

// Function to get menu choice from user
int getMenuChoice() {
    int choice;
    printf("Enter your choice: ");
    scanf("%d", &choice);
    return choice;
}

// Function to print the menu
void printMenu() {
    printf("Queue Operations\n");
    printf("1. Enqueue\n");
    printf("2. Dequeue\n");
    printf("3. Display\n");
    printf("4. Exit\n");
}

int main() {
    int menuChoice;
    clrscr();
    while (true) {
        printMenu();
        menuChoice = getMenuChoice();
        switch (menuChoice) {
            case 1:
                int insertValue;
                printf("Enter the value to be inserted: ");
                scanf("%d", &insertValue);
                enQueue(insertValue);
                break;
            case 2:
                deQueue();
                break;
            case 3:
                display();
                break;
            case 4:
                printf("Exiting...\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
    return 0;
}