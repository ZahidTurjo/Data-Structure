#include<bits/stdc++.h>
using namespace std;
int main(){
    map<string,int>mp;
    int x;
    cin>>x;
    while(x--){
        string s;
        cin>>s;
        mp[s]++;
        if(mp[s]==1){
            cout<<"OK"<<endl;
        }else{
            cout<<s<<mp[s]-1<<endl;
        }
       
       
    }




    return 0;
}