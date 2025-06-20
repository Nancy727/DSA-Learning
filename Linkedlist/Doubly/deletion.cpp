#include<iostream>
#include<vector>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node* back;

    Node(int data1, Node* next1, Node* back1) {
        data = data1;
        next = next1;
        back = back1;
    }

    Node(int data1) {
        data = data1;
        next = nullptr;
        back = nullptr;
    }
};

Node* convert2DLL(vector<int> arr) {
    if (arr.empty()) return nullptr;

    Node* head = new Node(arr[0]);
    Node* prev = head;

    for (int i = 1; i < arr.size(); i++) {
        Node* temp = new Node(arr[i], nullptr, prev);
        prev->next = temp;
        prev = temp;
    }
    return head;
}

void printDLL(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

Node* deleteAtHead(Node* head) {
    if (head == nullptr || head->next == nullptr) {
        delete head;
        return nullptr;
    }

    Node* temp = head;
    head = head->next;
    head->back = nullptr;
    delete temp;
    return head;
}

Node* deleteAtTail(Node* head) {
    if (head == nullptr || head->next == nullptr) {
        delete head;
        return nullptr;
    }

    Node* tail = head;
    while (tail->next != nullptr) {
        tail = tail->next;
    }

    Node* newTail = tail->back;
    newTail->next = nullptr;
    delete tail;
    return head;
}

int main() {
    vector<int> arr = {12, 5, 8, 7};
    Node* head = convert2DLL(arr);

    cout << "Original Doubly Linked List: ";
    printDLL(head);

    head = deleteAtTail(head);
    cout << "After deleting the tail node: ";
    printDLL(head);

    head = deleteAtHead(head);
    cout << "After deleting the head node: ";
    printDLL(head);

    return 0;
}
