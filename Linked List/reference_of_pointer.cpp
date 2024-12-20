#include<bits/stdc++.h>
using namespace std;
void fun(int*&p){
    int y=200;
    p=&y;

    cout<<"func:"<<*p<<endl;
}
int main(){
    int x=10;
    int *p=&x;
    // cout<<p<<endl;
    // cout<<*p<<endl;
    fun(p);
    cout<<"main:"<<*p<<endl;


    return 0;
}