#include<iostream>
using namespace std;

void printArray(int arr[], int n){
    //int n = sizeof(arr)/sizeof(int);
    //array are passed by refernece, so n meaning size of the array must be passed in the function where array is passed.
    cout<<"Printing in function"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<", ";
    }cout<<endl;
}

int main(){
    int arr[100];
    int n = 10;
    //cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Printing in main()"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<", ";
    }
    cout<<endl;
    printArray(arr, n);
    return 0;
}