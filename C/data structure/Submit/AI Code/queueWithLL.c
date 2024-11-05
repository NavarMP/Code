#include <stdio.h> 
#include <stdlib.h> 

// Node structure for the linked list 
struct Node { 
    int data; 
    struct Node* next; 
}; 

// Queue structure 
struct Queue { 
    struct Node *front, *rear; 
};

// Function to create a new node 
struct Node* newNode(int data) { 
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node)); 
    temp->data = data; 
    temp->next = NULL; 
    return temp; 
} 

// Function to create a new queue 
struct Queue* createQueue() { 
    struct Queue* q = (struct Queue*)malloc(sizeof(struct Queue)); 
    q->front = q->rear = NULL; 
    return q; 
} 

// Function to add an element to the queue (enqueue) 
void enqueue(struct Queue* q, int data) { 
    struct Node* temp = newNode(data); 

    // If the queue is empty, the new node is both front and rear 
    if (q->rear == NULL) { 
        q->front = q->rear = temp; 
        return; 
    } 

    // Add the new node at the end of the queue and update rear 
    q->rear->next = temp; 
    q->rear = temp; 
} 

// Function to remove an element from the queue (dequeue) 
void dequeue(struct Queue* q) { 
    // If the queue is empty, return 
    if (q->front == NULL) { 
        printf("Queue is empty\n"); 
        return; 
    } 

    // Store the previous front and move the front pointer to the next node 
    struct Node* temp = q->front; 
    q->front = q->front->next; 

    // If the front becomes NULL, then change rear to NULL 
    if (q->front == NULL) { 
        q->rear = NULL; 
    } 

    free(temp); 
} 

// Function to display the queue 
void displayQueue(struct Queue* q) { 
    if (q->front == NULL) { 
        printf("Queue is empty\n"); 
        return; 
    } 
     
    struct Node* temp = q->front; 

    while (temp != NULL) { 
        printf("%d ", temp->data); 
        temp = temp->next; 
    } 
    printf("\n"); 
} 

// Main function to test the queue 
int main() { 
    struct Queue* q = createQueue(); 
    int n, data, choice;

    printf("Enter the number of nodes to enqueue: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &data);
        enqueue(q, data);
    }

    printf("Queue after enqueue operations: "); 
    displayQueue(q); 

    while (1) {
        printf("Choose an operation: 1. Enqueue 2. Dequeue 3. Display Queue 4. Exit: ");
        scanf("%d", &choice);

        if (choice == 1) {
            enqueue(q);
            printf("Queue after enqueue operation: "); 
            displayQueue(q); 
        } else if (choice == 2) {
            dequeue(q);
            printf("Queue after dequeue operation: "); 
            displayQueue(q);

        } else if (choice == 3) {

            printf("Current Queue: ");
            displayQueue(q);

        } else if (choice == 4{
            break;
        
        } else {

            printf("Invalid choice. Please try again.\n");
        }
    }

    return 0; 
}