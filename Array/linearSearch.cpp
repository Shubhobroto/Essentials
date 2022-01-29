#include<iostream>
using namespace std;

int linearSearch(int arr[], int n, int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            return i+1;
        }
    }
    return -1;
}

int main(){

    int arr[] = {1, 2, 3, 4, 50};
    int key = 5;
    cout<<linearSearch(arr, 5, key);
    return 0;
}