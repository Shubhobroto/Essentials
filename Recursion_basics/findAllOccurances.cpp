#include<bits/stdc++.h>
using namespace std;


void helper(vector<int> v, int key, int i, vector<int> &ans){
    //base case
    if(i==v.size()){
        return;
    }
    if(v[i]==key){
        ans.push_back(i);
    }

    //recursive case
    helper(v,key,i+1,ans);
}
vector<int> findAllOccurances(vector<int> v, int key){
    vector<int> ans;
    helper(v,key,0,ans);
    return ans;
}
int main(){
    vector<int> v = {3,2,1,4,8,3,4,9,3,3,5};
    int key = 3;
    vector<int> ans = findAllOccurances(v, key);
    for(int i: ans){
        cout<<i;
    }
    return 0;
}