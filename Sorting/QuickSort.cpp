#include <iostream>
using namespace std;

int partition(int arr[], int low, int high) {
    int pivot = arr[low]; // Pivot is the first element
    int i = low;          // Start pointer
    int j = high;         // End pointer

    while (i < j) {
        // Find an element greater than or equal to the pivot from the left
        while (arr[i] <= pivot && i < high)
            i++;
        
        // Find an element smaller than or equal to the pivot from the right
        while (arr[j] > pivot)
            j--; 

        // Swap if pointers haven't crossed
        if (i < j)
            swap(arr[i], arr[j]);
    }

    // Place pivot in the correct position
    swap(arr[low], arr[j]);
    return j; // Return pivot index
}

void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high); // Partitioning index
        quickSort(arr, low, pi - 1);        // Sort the left part
        quickSort(arr, pi + 1, high);       // Sort the right part
    }
}

int main() {
    int arr[] = {10, 7, 8, 9, 1, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    quickSort(arr, 0, n - 1);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}
