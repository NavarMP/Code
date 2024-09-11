//7. 8.Delete a given node from a singly linked list

#include <stdio.h>
#include <stdlib.h>

// Define the structure for a node in the linked list
typedef struct Node {
    int data;
    struct Node* next;
} Node;

// Function to delete a node with a given key from the linked list
void deleteNode(Node** head, int key) {
    // Check if the head is NULL
    if (*head == NULL) {
        printf("List is empty\n");
        return;
    }

    // Check if the node to be deleted is the head node
    if ((*head)->data == key) {
        Node* temp = *head;
        *head = (*head)->next;
        free(temp);
        return;
    }

    // Traverse the list to find the node to be deleted
    Node* current = *head;
    while (current->next != NULL) {
        if (current->next->data == key) {
            Node* temp = current->next;
            current->next = current->next->next;
            free(temp);
            return;
        }
        current = current->next;
    }

    // If the node is not found, print an error message
    printf("Node with key %d not found in the list\n", key);
}

// Function to print the linked list
void printList(Node* head) {
    while (head != NULL) {
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
}

int main() {
    Node* head = NULL;

    // Create a sample linked list: 1 -> 2 -> 3 -> 4 -> 5
    head = (Node*)malloc(sizeof(Node));
    head->data = 1;
    head->next = (Node*)malloc(sizeof(Node));
    head->next->data = 2;
    head->next->next = (Node*)malloc(sizeof(Node));
    head->next->next->data = 3;
    head->next->next->next = (Node*)malloc(sizeof(Node));
    head->next->next->next->data = 4;
    head->next->next->next->next = (Node*)malloc(sizeof(Node));
    head->next->next->next->next->data = 5;
    head->next->next->next->next->next = NULL;

    printf("Original list: ");
    printList(head);

    // Delete the node with key 3
    deleteNode(&head, 3);

    printf("List after deletion: ");
    printList(head);

    return 0;
}