#include<bits/stdc++.h>
using namespace std;
int main(){
    // map<string,int>mp;
    // mp["boss"]=5;
    // mp["turjo"]=50;
    // mp["hamim"]=0;
    // cout<<mp["boss"]<<endl;
    // // for(auto it =mp.begin();it!=mp.end();it++){
    // //     cout<<it->first<<":"<<it->second<<endl;
    // // }
    // if(mp.count("hamim")){
    //     cout<<"yes";
    // }else{
    //     cout<<"No";
    // }

    map<char,int>mp;
    string s;
    cin>>s;
    for(char c: s){
        mp[c]++;

    }
    int x;
    cin>>x;
    for(int i=0;i<x;i++){
        char b;
        cin>>b;
      cout<<mp[b]<<endl;

    }

  






    return 0;
}