#include<iostream>
using namespace std;
int lastOccurance(int arr[],int n, int key){
    //base case
    if(n==0){
        return -1;
    }
    

    //recursive case
    int lastIndex = lastOccurance(arr+1,n-1,key);
    if(lastIndex==-1){
       if(arr[0]==key){
            return 0;
            }
        else{
            return -1;
            }
    }
    return lastIndex + 1;
}
int main(){
    int arr[]={1,2,4,7,8,9,7,5};
    int n = sizeof(arr)/sizeof(int);
    int key=7;
    cout<<lastOccurance(arr,n,key);

    return 0;
}