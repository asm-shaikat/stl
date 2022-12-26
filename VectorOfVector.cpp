// vector size =3
// 2
// 0,1
// 3
// 0,1,2
// 5
// 0,3,4,5,6
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<vector<int>>vec;
    int n;
    cout<<"Enter vector size:";
    cin>>n;
    for(int i=0;i<n;i++){
        int n1;
        cout<<"vector size:";
        cin>>n1;
        vector<int>temp;
        for(int j=0;j<n1;j++){
            int x;
            cin>>x;
            temp.push_back(x);
        }
        vec.push_back(temp);
    }
    cout<<vec[0][0];
}