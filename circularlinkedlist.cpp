#include <iostream>
using namespace std;

// Node class
class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};

// Circular Linked List class
class CircularLinkedList {
private:
    Node* head;

public:
    CircularLinkedList() {
        head = nullptr;
    }

    // Insert at head
    void insertAtHead(int val) {
        Node* newNode = new Node(val);
        if (!head) {
            head = newNode;
            head->next = head;  // points to itself
            return;
        }

        Node* temp = head;
        while (temp->next != head) {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->next = head;
        head = newNode;
    }

    // Insert at end
    void insertAtEnd(int val) {
        Node* newNode = new Node(val);
        if (!head) {
            head = newNode;
            head->next = head;
            return;
        }

        Node* temp = head;
        while (temp->next != head) {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->next = head;
    }

    // Display the circular linked list
    void display() {
        if (!head) {
            cout << "List is empty" << endl;
            return;
        }
        Node* temp = head;
        do {
            cout << temp->data << " -> ";
            temp = temp->next;
        } while (temp != head);
        cout << "(head)" << endl;
    }
};

int main() {
    CircularLinkedList cll;

    cll.insertAtHead(10);
    cll.insertAtHead(20);
    cll.insertAtEnd(5);
    cll.insertAtEnd(1);

    cll.display();

    return 0;
}

