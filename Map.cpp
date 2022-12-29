#include<bits/stdc++.h>
using namespace std; 
int main(){
    int n;
    map<int, int> m;
    cin >> n;
    for(int i = 0; i < n;i++){
        int x;
        cin>>x;
        m[i]= x;
    }
    for(auto j : m){
        cout<<j.first<<" "<<j.second<<endl;
    }     
}