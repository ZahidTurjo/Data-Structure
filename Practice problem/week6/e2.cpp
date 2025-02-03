#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<string,int>a,pair<string,int>b){
    if(a.first==b.first){
        return a.second>b.second;
    }else{
        return a.first<b.first;
    }
}
int main(){
    int n;
    cin>>n;
    vector<pair<string,int>> pairs;
    for(int i=0;i<n;i++){
        string name;
        int roll;
        cin>>name>>roll;
        pairs.push_back({name,roll});

    }
    sort(pairs.begin(),pairs.end(),cmp);
    for(int i =0;i<n;i++){
        cout<<pairs[i].first<<" "<<pairs[i].second<<endl;
    }


    return 0;
}