#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        set<int>s;
        for(int i =0;i<n;i++){
            int val;cin>>val;
            s.insert(val);
        }
        for(int x:s){
            cout<<x<<" ";
        }
        cout<<endl;
    }


    return 0;
}