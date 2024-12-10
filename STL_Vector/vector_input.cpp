#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v;
    int size=5;
    // for(int i=0;i<size;i++){
    //     cin>>v[i];
    // }
    for(int i= 0;i<size;i++){
        int x;
        cin>>x;
        v.push_back(x);

    }
   for(int x:v){
    cout<<x<<" ";
   }
}