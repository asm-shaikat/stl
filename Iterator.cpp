#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter vector size:";
    cin>>n;    
    vector<int> vec;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        vec.push_back(x);
    }
    vector<int> ::iterator a = vec.begin();
    for(a = vec.begin();a!=vec.end();a++){
        cout<<*a<<" ";
    }
}