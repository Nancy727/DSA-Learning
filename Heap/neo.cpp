#include <bits/stdc++.h>
using namespace std;

void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

void minHeapify(int arr[], int size, int i) {
    int smallest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < size && arr[left] < arr[smallest])
        smallest = left;

    if (right < size && arr[right] < arr[smallest])
        smallest = right;

    if (smallest != i) {
        swap(&arr[i], &arr[smallest]);
        minHeapify(arr, size, smallest);
    }
}

void buildMinHeap(int arr[], int size) {
    for (int i = (size / 2) - 1; i >= 0; i--) {
        minHeapify(arr, size, i);
    }
}

void insertElement(int arr[], int &size, int value) {
    arr[size] = value;
    (size)++;

    int i = size - 1;
    while (i > 0 && arr[(i - 1) / 2] > arr[i]) {
        swap(&arr[i], &arr[(i - 1) / 2]);
        i = (i - 1) / 2;
    }
}

void displayMinHeap(int arr[], int size) {
    cout << "Min Heap is: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

double averageOfElements(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return (double)sum / size;
}

int main() {
    int n;
    cin >> n;

    int *arr = new int[n];
    int size = 0;

    for (int i = 0; i < n; i++) {
        int value;
        cin >> value;
        insertElement(arr, size, value);
    }
    
    buildMinHeap(arr, size);
    displayMinHeap(arr, size);

    double average = averageOfElements(arr, size);
    cout << "Average: "<< fixed << setprecision(2)<< average;

    delete[] arr;
    return 0;
}