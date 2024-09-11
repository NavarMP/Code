//15. 18.Traverse a binary search tree in pre-order

#include <stdio.h>
#include <stdlib.h>

// Structure to represent a binary tree node
typedef struct Node {
    int data;
    struct Node* left;
    struct Node* right;
} Node;

// Function to create a new binary tree node
Node* createNode(int data) {
    Node* node = (Node*)malloc(sizeof(Node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return node;
}

// Function to traverse a binary search tree in pre-order
void preOrderTraversal(Node* root) {
    if (root == NULL) {
        return;
    }
    printf("%d ", root->data); // visit the current node
    preOrderTraversal(root->left); // traverse the left subtree
    preOrderTraversal(root->right); // traverse the right subtree
}

int main() {
    // Create a sample binary search tree
    Node* root = createNode(5);
    root->left = createNode(3);
    root->right = createNode(7);
    root->left->left = createNode(2);
    root->left->right = createNode(4);
    root->right->left = createNode(6);
    root->right->right = createNode(8);

    printf("Pre-order traversal: ");
    preOrderTraversal(root);
    printf("\n");

    return 0;
}