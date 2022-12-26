#include<bits/stdc++.h>
using namespace std;
void printVector(vector<int> vec,vector<int> vec1){
    cout<<"First vector"<<endl;
    for(int i=0;i<vec.size();i++){
        cout<<vec[i]<<" ";
    }
    cout<<endl;
    cout<<"Second vector"<<endl;
    for(int i=0;i<vec1.size();i++){
        cout<<vec1[i]<<" ";
    }
    cout<<endl;
}

int main(){
    // vector<int> vec(10);
    vector<int> vec;
    int n;
    cout<<"How many input:";
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
         vec.push_back(x);
    }
    vector<int> & vec1=vec;
    vec.push_back(3);  //as vec is reinitial it effect on vec1 because of call by reference(&)
    printVector(vec,vec1);
}