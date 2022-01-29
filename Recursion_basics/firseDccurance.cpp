#include<iostream>
using namespace std;
int firstOcc(int arr[],int key,int n){
    //base case
    if(n==0){
        return -1;
    }
    if(arr[0]==key){
        return 0;
    }
    //recursive case
    int subIndex = firstOcc(arr+1,key,n-1);
    if(subIndex != -1){
        return subIndex+1;
    }
    return -1;
}

int main(){
    int arr[]={5,1,4,7,8,3,2};
    int key=7;
    int n=sizeof(arr)/sizeof(int);
    cout<<firstOcc(arr,key,n);



    return 0;
}