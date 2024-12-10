#include<bits/stdc++.h>
using namespace std;
int main()

{
    // type-1
    // vector<int>v;

    // type-2
    // vector<int>v(5);

    // type-3
    // vector<int>v(5,1);
    // vector<int>v2(v);

    // type-4 array copy
    int a[5]={1,2,3,4,5};
    vector<int>v(a,a+5);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }
    cout<<v.size()<<" "<<endl;
}