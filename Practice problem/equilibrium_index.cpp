#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    vector<int>pre(n);
   
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
     pre[0]=v[0];
    for(int i=1;i<n;i++){
        pre[i]=pre[i-1]+v[i];
    }
    int index=0;
    for(int i=1;i<n-1;i++){
         int left=pre[i-1];
         int right=pre[n-1]-pre[i];
         if(left == right){
            index=i;
            
         }
    }
    cout<<index<<endl;
  
}