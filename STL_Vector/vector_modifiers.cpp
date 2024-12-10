#include<bits/stdc++.h>
using namespace std;
int main(){
    // vector<int> v={1,2,3,4,5,2,2};
    // v.push_back(100);
    // vector<int>v2;
    // v2=v;
    // for(int i=0;i<v2.size();i++){
    //     cout<<v2[i]<<" ";
    // }
    // v.pop_back();
    // v.insert(v.begin()+2,1010);
    // for(int x: v){
    //     cout<<x<<" ";
    // }
    // cout<<endl;
    // v.erase(v.begin()+2);
    // replace(v.begin(),v.end(),2,120);
    // replace(v.begin(),v.end()-1,2,100);


    // auto it=find(v.begin(),v.end(),2);
    // if(it==v.end()){
    //     cout<<"not Found";
        
    // }
    // else{
    //     cout<<"Found";
    // }

    
     vector<int> v={1,2,3,4,5};
    v.erase(v.begin()+2, v.end());
    for(int x:v){
        cout<<x<<" ";
    }

}