#include<iostream>
using namespace std;

int fibonacci(int n){
    //base case
    if(n==1 or n==0){
        return n;
    }

    //recursive case
    return fibonacci(n-2) + fibonacci(n-1);
}
int main(){
    int n;
    cin>>n;
    cout<<fibonacci(n)<<endl;
    return 0;
}