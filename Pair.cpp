#include<iostream>
using namespace std;
int main(){
    pair<int,string> p;
    pair<int,string>p1;
    cin>>p.first;
    p.second={"shaikat"};
    p1 = {17,"asm"};
    p.swap(p1);
    cout<<p.first<<" "<<p.second<<endl;
    return 0;
}