// #include <iostream>
// using namespace std;

// #define MAX 5
// class Queue {
//     int front, rear;
//     int arr[MAX];

// public:
//     Queue() { 
//         front = rear = -1; 
//     }

//     bool isFull() { 
//         return rear == MAX - 1; 
//     }
//     bool isEmpty() {
//          return front == -1 || front > rear; 
//     }

//     void enqueue(int value) {
//         if (isFull()) {
//             cout << "Queue Overflow\n";
//         } else {
//             if (front == -1) front = 0;
//             arr[++rear] = value;
//             cout << value << " added to the queue.\n";
//         }
//     }

//     void dequeue() {
//         if (isEmpty()) {
//             cout << "Queue Underflow\n";
//         } else {
//             cout << arr[front++] << " removed from the queue.\n";
//         }
//     }

//     void traverse() {
//         if (isEmpty()) {
//             cout << "Queue is empty.\n";
//         } else {
//             cout << "Queue elements: ";
//             for (int i = front; i <= rear; i++) {
//                 cout << arr[i] << " ";
//             }
//             cout << endl;
//         }
//     }
// };

// int main() {
//     Queue q;
//     q.enqueue(10);
//     q.enqueue(20);
//     q.enqueue(30);
//     q.traverse();
//     q.dequeue();
//     q.traverse();
//     return 0;
// }
#include<iostream>
using namespace  std;
#define n 100
class Queue{
    int *arr;
    int front,rear;
    public:
    Queue(){
        arr=new int[n];
        front=-1;
        rear=-1;
    }
    void enqueue(int val){
        if(rear==n-1){
            cout<<"Queue is overflow"<<endl;
            return;
        }
        if (front==-1){
            front++;
        }
        rear++;
        arr[rear]=val;
    }
    int dequeue(){
        if(front==-1|| front>rear){
            cout<<"Queue is empty"<<endl;
            return -1;

        }
        front++;
    }
    int peek(){
        if(front==-1|| front>rear){
            cout<<"Queue is empty"<<endl;
            return -1;
        }
        return arr[front];
    }
    bool empty(){
        return front==-1;
    }
    void display(){
        if(front==-1||front>rear){
            cout<<"Queue is empty"<<endl;
            return;
        }else{
            cout<<"Elements are: ";
            for(int i=front;i<=rear;i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
    }
};
int main()
{
    Queue q;
    q.enqueue(3);
    q.enqueue(2);
    q.enqueue(1);
    q.display();
    q.dequeue();
   
    cout<<q.empty()<<endl;
    return 0;
}
