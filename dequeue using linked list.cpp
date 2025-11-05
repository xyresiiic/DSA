#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

class Queue {
private:
    Node* front;
    Node* rear;

public:
    Queue() {
        front = rear = nullptr;
    }

   
    void enqueue(int value) 
	{
        Node* newNode = new Node();
        newNode->data = value;
        newNode->next = nullptr;

        if (rear == nullptr) 
		{ 
            front = rear = newNode;
        } else {
            rear->next = newNode;
            rear = newNode;
        }

        cout << value << " enqueued successfully.\n";
    }

    
    void dequeue() 
	{
        if (front == nullptr) 
		{
            cout << "Queue is empty. Cannot dequeue.\n";
            return;
        }

        Node* temp = front;
        front = front->next;

        if (front == nullptr)
            rear = nullptr;

        cout << temp->data << " dequeued successfully.\n";
        delete temp;
    }

    
    void display() 
	{
        if (front == nullptr) 
		{
            cout << "Queue is empty.\n";
            return;
        }

        Node* temp = front;
        cout << "Queue elements: ";
        while (temp != nullptr) 
		{
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() 
{
    Queue q;
    int choice, value;

    while (true) 
	{
        cout <<endl<< "--- Queue Menu ---"<<endl;
        cout << "1. Enqueue"<<endl;
        cout << "2. Dequeue"<<endl;
        cout << "3. Display"<<endl;
        cout << "4. Exit"<<endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter value to enqueue: ";
            cin >> value;
            q.enqueue(value);
            break;

        case 2:
            q.dequeue();
            break;

        case 3:
            q.display();
            break;

        case 4:
            cout << "Exiting program.\n";
            return 0;

        default:
            cout << "Invalid choice. Try again.\n";
        }
    }
}

