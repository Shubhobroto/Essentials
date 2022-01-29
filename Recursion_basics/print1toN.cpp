#include<iostream>
using namespace std;
void printInc(int n){
    //base case
    if(n==0){
        cout<<n<<endl;
        return;
    }


    //recursive case 
    printInc(n-1);
    cout<<n<<endl;
}
void printDec(int n){
    //base case
    if(n==0){
        cout<<n<<endl;
        return;
    }
    //recursive case
    cout<<n<<endl;
    printDec(n-1);
}
int main(){
    int n;
    cin>>n;
    printDec(n);
    cout<<endl;
    printInc(n);
    return 0;
}