#include<bits/stdc++.h>
using namespace std;
int main(){
    set<int>s;
    int n;
    cin>>n;
    while (n--)
    {
        int val;
        cin>>val;
        s.insert(val);
    }
    vector<int>v;
    for(auto it =s.begin(); it !=s.end();it++){
        v.push_back(*it);
    }
    reverse(v.begin(), v.end());
    for(int x:v){
        cout<<x<<endl;
    }





    return 0;
}