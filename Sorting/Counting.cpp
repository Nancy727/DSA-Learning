 #include <iostream>  
 #include<algorithm>                     //The max function is used to find the maximum of two values.
                                           // Usage: It takes two arguments and returns the larger of the two.
                                           // Example: int maximum = max(a, b); will return the larger of a and b.
                                          // Namespace: It is part of the <algorithm> header.
 
using namespace std;
void countingSort(int arr[], int n) {
     int max = *max_element(arr, arr + n);  //The max_element function is used to find the iterator pointing to the       maximum element in a range.
// Usage: It takes a pair of iterators (usually pointing to the beginning and end of a range) and returns an iterator to the maximum element in that range.
    int count[max + 1] = {0};
    for (int i = 0; i < n; i++) {
        count[arr[i]]++;
    }
    int index = 0;
    for (int i = 0; i <= max; i++) {
        while (count[i] > 0) {
            arr[index++] = i;
            count[i]--;
        }
    }
}

int main() {
    int arr[] = {5, 2, 6, 1, 4, 2, 1, 3, 7};
    int n = sizeof(arr) / sizeof(int);
    
    countingSort(arr, n);
    
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
