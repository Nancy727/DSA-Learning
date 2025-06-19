#include <iostream>
using namespace std;

// Node structure for doubly linked list
struct Node {
    int data;
    Node* prev;
    Node* next;

    Node(int value) {
        data = value;
        prev = nullptr;
        next = nullptr;
    }
};

// Doubly Linked List class
class DoublyLinkedList {
public:
    Node* head;

    DoublyLinkedList() { head = nullptr; }

    // Insertion at the beginning
    void insertAtBeginning(int value) {
        Node* newNode = new Node(value);
        if (head == nullptr) {
            head = newNode;
        } else {
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
        cout << "Inserted " << value << " at the beginning.\n";
    }

    // Insertion at the end
    void insertAtEnd(int value) {
        Node* newNode = new Node(value);
        if (head == nullptr) {
            head = newNode;
        } else {
            Node* temp = head;
            while (temp->next != nullptr) {
                temp = temp->next;
            }
            temp->next = newNode;
            newNode->prev = temp;
        }
        cout << "Inserted " << value << " at the end.\n";
    }

    // Deletion of a node
    void deleteNode(int value) {
        if (head == nullptr) {
            cout << "List is empty. Cannot delete.\n";
            return;
        }

        Node* temp = head;

        // Traverse the list to find the node to be deleted
        while (temp != nullptr && temp->data != value) {
            temp = temp->next;
        }

        // If the node to be deleted is found
        if (temp != nullptr) {
            if (temp->prev != nullptr) { // If it's not the head node
                temp->prev->next = temp->next;
            } else { // If it's the head node
                head = temp->next;
            }

            if (temp->next != nullptr) { // If it's not the last node
                temp->next->prev = temp->prev;
            }

            delete temp;
            cout << "Deleted node with value " << value << ".\n";
        } else {
            cout << "Node with value " << value << " not found.\n";
        }
    }

    // Traversal in forward direction
    void traverseForward() {
        if (head == nullptr) {
            cout << "List is empty.\n";
            return;
        }
        Node* temp = head;
        cout << "List in forward direction: ";
        while (temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    // Traversal in backward direction
    void traverseBackward() {
        if (head == nullptr) {
            cout << "List is empty.\n";
            return;
        }

        Node* temp = head;
        // Go to the last node
        while (temp->next != nullptr) {
            temp = temp->next;
        }

        cout << "List in backward direction: ";
        while (temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->prev;
        }
        cout << endl;
    }
};

int main() {
    DoublyLinkedList dll;

    // Inserting elements
    dll.insertAtBeginning(10);
    dll.insertAtBeginning(20);
    dll.insertAtEnd(30);
    dll.insertAtEnd(40);

    // Forward traversal
    dll.traverseForward();

    // Backward traversal
    dll.traverseBackward();

    // Deleting a node
    dll.deleteNode(20);
    dll.traverseForward();

    return 0;
}
