//create a singly ll of n nodes

#include <stdio.h>
#include <stdlib.h>

//define node
struct Node {
    int data;
    struct Node* next;
};

//print linked list
void printList (struct  Node* head) {
    struct Node *p=head; //start from the head
    while (p != NULL) {
        printf ("%d ->", p ->data); //print data of the current node
        p = p -> next; //move to the next node
    }
    printf ("NULL\n"); //end of the list
}

//create a new node
struct Node* createNode (int data) {
    struct Node* createNode = (struct Node*) malloc (sizeof (struct Node));
    newNode -> data = data;
    newNode -> next = NULL;
    return newNode;
}

int main() {
    //create node
    struct Node* head = createNode (1);
    struct Node* head = createNode (2);
    struct Node* head = createNode (3);
    struct Node* head = createNode (4);

    //link nodes
    head -> next = second;
    second -> next = third;
    third -> next = fourth;

    //traverse & print the list
    printList (head);
    return 0;
}