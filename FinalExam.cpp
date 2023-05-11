
#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node(int value) {
        data = value;
        next = nullptr;
    }
};

class LinkedList {
private:
    Node* head;
public:
    LinkedList() {
        head = nullptr;
    }

    void insertAtBeginning(int value) {
        Node* newNode = new Node(value);
        newNode->next = head;
        head = newNode;
    }

    void insertAtEnd(int value) {
        Node* newNode = new Node(value);
        if (head == nullptr) {
            head = newNode;
            return;
        }
        Node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newNode;
    }

    void insertAfterNode(Node* prevNode, int value) {
        if (prevNode == nullptr) {
            return;
        }
        Node* newNode = new Node(value);
        newNode->next = prevNode->next;
        prevNode->next = newNode;
    }

    Node* search(int value) {
        Node* temp = head;
        while (temp != nullptr) {
            if (temp->data == value) {
                return temp;
            }
            temp = temp->next;
        }
        return nullptr;
    }

    void deleteFromBeginning() {
        if (head == nullptr) {
            return;
        }
        Node* temp = head;
        head = head->next;
        delete temp;
    }

    void deleteFromEnd() {
        if (head == nullptr) {
            return;
        }
        if (head->next == nullptr) {
            delete head;
            head = nullptr;
            return;
        }
        Node* temp = head;
        while (temp->next->next != nullptr) {
            temp = temp->next;
        }
        delete temp->next;
        temp->next = nullptr;
    }

    void deleteFromMiddle(int value) {
        Node* nodeToDelete = search(value);
        if (nodeToDelete == nullptr || nodeToDelete == head) {
            return;
        }
        Node* temp = head;
        while (temp->next != nodeToDelete) {
            temp = temp->next;
        }
        temp->next = nodeToDelete->next;
        delete nodeToDelete;
    }

    void displayList() {
        Node* temp = head;
        while (temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    LinkedList list;
    list.insertAtEnd(5);
    list.insertAtEnd(10);
    list.insertAtEnd(15);
    list.insertAtBeginning(1);
    list.insertAfterNode(list.search(5), 7);
    cout << "Initial List: ";
    list.displayList();
    list.deleteFromBeginning();
    cout << "List after deleting the first node: ";
    list.displayList();
    list.deleteFromEnd();
    cout << "List after deleting the last node: ";
    list.displayList();
    list.deleteFromMiddle(7);
    cout << "List after deleting a node from the middle: ";
    list.displayList();
    return 0;
}
