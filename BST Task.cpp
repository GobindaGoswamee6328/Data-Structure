
#include <iostream>
#include <string>

using namespace std;

// Node structure for the BST
struct Node {
    int id;
    string name;
    float cgpa;
    Node* left;
    Node* right;
};

// Function to create a new node
Node* createNode(int id, string name, float cgpa) {
    Node* newNode = new Node;
    newNode->id = id;
    newNode->name = name;
    newNode->cgpa = cgpa;
    newNode->left = newNode->right = NULL;
    return newNode;
}

// Function to insert a new node in the BST
Node* insertNode(Node* root, int id, string name, float cgpa) {
    if (root == NULL) {
        return createNode(id, name, cgpa);
    }
    if (id < root->id) {
        root->left = insertNode(root->left, id, name, cgpa);
    }
    else if (id > root->id) {
        root->right = insertNode(root->right, id, name, cgpa);
    }
    return root;
}

// Function to search for a node in the BST by id
Node* searchNode(Node* root, int id) {
    if (root == NULL || root->id == id) {
        return root;
    }
    if (root->id < id) {
        return searchNode(root->right, id);
    }
    return searchNode(root->left, id);
}

// Function to display the data of a node
void displayNode(Node* node) {
    if (node == NULL) {
        return;
    }
    cout << "ID: " << node->id << endl;
    cout << "Name: " << node->name << endl;
    cout << "CGPA: " << node->cgpa << endl;
}

// Function to display the BST in inorder traversal
void displayBST(Node* root) {
    if (root == NULL) {
        return;
    }
    displayBST(root->left);
    displayNode(root);
    displayBST(root->right);
}

// Main function
int main() {
    Node* root = NULL;

    // Inserting some nodes
    root = insertNode(root, 1, "John", 3.5);
    insertNode(root, 2, "Alice", 3.8);
    insertNode(root, 3, "Bob", 3.2);

    // Displaying the BST
    cout << "BST:" << endl;
    displayBST(root);

    // Searching for a node by id
    Node* node = searchNode(root, 3);
    if (node != NULL) {
        cout << "Found node:" << endl;
        displayNode(node);
    }
    else {
        cout << "Node not found!" << endl;
    }

    return 0;
}

