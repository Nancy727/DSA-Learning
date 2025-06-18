#include<iostream>
using namespace std;
void swap(int *x,int *y){
    int temp=*x;
    *x=*y;
    *y=temp;
}
void insertElement(int *arr,int *size,int value){
    (*size)++;
    int i=*size-1;
    arr[*size-1]=value;
    while(i>0 && arr[(i-1)/2]<arr[i]){
        swap(&arr[i],&arr[(i-1)/2]);
        i=(i-1)/2;
    }
}
void Maxheapify(int *arr,int size,int i){
    int largest=i;
    int left=2*i+1;
    int right=2*i+2;
    if(left<size && arr[left]>arr[largest]){
        largest=left;
    }
    if(right<size && arr[right]>arr[largest]){
        largest=right;
    }
    if(largest !=size){
        swap(&arr[i],&arr[(i-1)/2]);
        Maxheapify(arr,size,largest);
    }
}
void buildMaxHeap(int *arr,int size){
    for(int i=(size/2)-1;i>=0;i--){
        Maxheapify(arr,size,i);
    }
}
void displayMaxHeap(int *arr,int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int averageOfElements(int *arr,int size){
    int sum=0;
    for(int i=0;i<size;i++){
        sum+=arr[i];
    }
    return (double)sum/size;
}
int main() {
    int arr[] = {3, 5, 1, 10, 2, 7};
    int size = 6;

    buildMaxHeap(arr, size);

    cout << "Initial ";
    displayMaxHeap(arr, size);

    insertElement(arr, &size, 4);
    cout << "After insertion of 4: ";
    displayMaxHeap(arr, size);

    double avg = averageOfElements(arr, size);
    cout << "Average of elements: " << avg << endl;

    return 0;
}