#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    vector<int>v(26,0);
    for(int i=0;i<s.size();i++){
        v[s[i]-'a']++;

    }
   for(int i=0;i<v.size();i++){
    if(v[i]>0){
        cout<<char('a'+i)<<" "<<':'<<" "<<v[i]<<endl;
    }
   }
}
  
