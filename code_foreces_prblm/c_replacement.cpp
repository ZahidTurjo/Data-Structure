#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        if(x<0){
            v[i]=2;
        }else if(x>0){
            v[i]=1;
        }else{
            v[i]=x;
        }
    }
    for(int x:v){
        cout<<x<<" ";
    }
}