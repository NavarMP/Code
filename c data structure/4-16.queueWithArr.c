#include <stdio.h>
#include <conio.h>
#include <stdbool.h>

const int QUEUE_SIZE = 10;

int queue[QUEUE_SIZE];
int front = -1, rear = -1;

void enQueue(int value);
void deQueue();
void display();
int getMenuChoice();
void printMenu();

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
                exit(0);
            default:
                printf("\nWrong selection!!! Try again!!!");
        }
    }
    return 0;
}

void enQueue(int value) {
    if (rear == QUEUE_SIZE - 1) {
        printf("\nQueue is Full!!! Insertion is not possible!!!");
    } else {
        if (front == -1) {
            front = 0;
        }
        rear++;
        queue[rear] = value;
        printf("\nInsertion success!!!");
    }
}

void deQueue() {
    if (front == rear) {
        printf("\nQueue is Empty!!! Deletion is not possible!!!");
    } else {
        printf("\nDeleted : %d", queue[front]);
        front++;
        if (front == rear) {
            front = rear = -1;
        }
    }
}

void display() {
    if (rear == -1) {
        printf("\nQueue is Empty!!!");
    } else {
        int i;
        printf("\nQueue elements are:\n");
        for (i = front; i <= rear; i++) {
            printf("%d\t", queue[i]);
        }
    }
}

int getMenuChoice() {
    int choice;
    printf("\nEnter your choice: ");
    scanf("%d", &choice);
    return choice;
}

void printMenu() {
    printf("\n\n***** MENU *****\n");
    printf("1. Insertion\n2. Deletion\n3. Display\n4. Exit");
}