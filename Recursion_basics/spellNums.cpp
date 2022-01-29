#include<iostream>
#include<vector>
using namespace std;
void helper( int n, vector<int> &ans){
    //base case
    if(n==0){
        ans.push_back(0);
        return;
    }
    //recursive case
    helper(n-1,ans);
    ans.push_back(n);
}
vector<int> spellNums(int n){
    vector<int> ans;
    helper(n,ans);
    return ans;
}
int main(){
    int n=10;
    vector<int> ans = spellNums(n);
    for(int i: ans){
        cout<<i<<", ";
    }
    return 0;
}