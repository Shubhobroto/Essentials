#include<iostream>
using namespace std;


string spell[]={"zero","one","two","three","four","five","six","seven","eight","nine"};

void spellDigit(int n){
    if(n==0){
        return;
    }
    int last_digit=n%10;
    n=n/10;
    spellDigit(n);
    cout<<spell[last_digit]<<" ";
    
}
int main(){
    int n= 4565;
    spellDigit(n);


    return 0;
}