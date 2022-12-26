// array size =3
// 2
// 0,1
// 3
// 0,1,2
// 5
// 0,3,4,5,6
#include<bits/stdc++.h>
using namespace std;

void printVector(vector<int> & vec){
    for(int i=0;i<vec.size();i++){
        cout<<vec[i]<<" ";
    }

}

int main(){
    vector<int> vec;
    int n;
    cout<<"Enter array size:";
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cout<<"Enter vector size:";
        cin>>x;
        for(int i=0;i<x;i++){
            int y;
            cin>>y;
            vec.push_back(y);
        }
        
    }
    printVector(vec);
    return 0;
}