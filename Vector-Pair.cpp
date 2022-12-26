#include<bits/stdc++.h>
using namespace std;
void printVectorPair(vector<pair<int,int>> & Vec){
    for(int i=0;i<Vec.size();i++){
        cout<<Vec[i].first<<" "<<Vec[i].second<<endl;
    }
    cout<<endl;
}

int main(){
    vector<pair<int,int>>Vec;
    // Vec.push_back({2,3});
    // cout<<Vec[0].first<<" "<<Vec[0].second;
    int n;
    cout<<"How many pair? ";
    cin>>n;
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        Vec.push_back({a,b});
    }
    printVectorPair(Vec);
}