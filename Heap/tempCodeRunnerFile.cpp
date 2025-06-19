int main()
{
    int arr[]={0,10,20,30,25,5,40,35};
    int n=sizeof(arr)/sizeof(arr[0]);
    for (int i = 2; i < n; i++) {
        insert(arr,i);
    }
    cout<<"Max heap array: ";
    cout << "[";
    for (int i = 1; i < n; i++) {
        cout<<arr[i]<<" ";
        if(i<n-1){
            cout<<", ";
        }
    }
    cout << "]" << endl;
    
    return 0;
}
