/*Given N strings,
print unique strings in lexiographical 
order with their frequency
N<=10^5
|S| <=100
*/

/*    Output    */
// 6
// abc
// def
// ghi
// abc
// abc
// def
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    map<string,int> m;
    cout<<"How many input? ";
    cin >> n;
    for(int i=0; i<n; i++){
        string st;
        cin >> st;
        m[st]++;
    }
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }
}