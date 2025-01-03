#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v={1,2,3,4};
    list<int>l(v.begin(),v.end());
    // cout<<l.size()<<endl;
    // for( int x :l){
    //     cout<<x<<" ";
    // }
    // l.clear();
    l.resize(2);
    for( auto it=l.begin();it!=l.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
    cout<<l.size()<<endl;



    return 0;
}