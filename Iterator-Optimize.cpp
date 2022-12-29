#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v;
    int n;
    cout<<"Enter number of element:";
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }

    // printing copy of v vector
    cout<<"printing copy of v vector"<<endl;
    for(auto element: v){
        cout<<element<<" ";
    }
    cout<<endl;
    // printing v vector
    cout<<"printing v vector"<<endl;
    for(auto &element: v){
        cout<<element<<" ";
    }
    cout<<endl;
    // Initilization of iterator of vector
    cout<<"iterator of vector"<<endl;
    vector<int> ::iterator it;
    for(it = v.begin();it!=v.end();it++){
        cout<<*it<<" ";   
    }
    cout<<endl;
    // Instead of above code we can write
    cout<<"iterator of vector in short"<<endl;
    for(auto it=v.begin();it!=v.end();it++){
        cout<<*it<<" ";
    }
}