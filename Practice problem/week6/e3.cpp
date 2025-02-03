#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    cin.ignore();

    while(t--){
        map<string,int>mp;
        string s;
        getline(cin,s);
        stringstream ss(s);
        string word;
        vector<pair<string,int>>v;
        int mx=INT_MIN;

        while(ss>>word){
            int x=mp[word]++;
            int get_mx=x+1;
            v.push_back({word,get_mx});
            mx=max(get_mx,mx);


        }
        
        for(auto it :v){
            if(it.second == mx){
                cout<<it.first<<" "<<it.second<<endl;
                break;
            }
        }
        
        


    }
    


    return 0;
}