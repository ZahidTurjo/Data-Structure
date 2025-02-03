#include<bits/stdc++.h>
using namespace std;
// void delete_heap(vectot<int>&v){

// }
int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    int cur_idx=v.size()-1;
    v[0]=v[cur_idx];
    v.pop_back();

  
    int par_idx=0;
    while(par_idx<n){
        int left_idx=par_idx*2+1;
        int right_idx=par_idx*2+2;
        if(v[left_idx]>v[right_idx] &&v[left_idx]>v[par_idx] && left_idx<v.size()){
            swap(v[left_idx],v[par_idx]);
            par_idx=left_idx;
        }else if(v[left_idx]<v[right_idx] &&v[right_idx]>v[par_idx] && right_idx<v.size()){
            swap(v[right_idx],v[par_idx]);
            par_idx=right_idx;
        }else{
            break;
        }
        
    }
    for(int x:v){
        cout<<x<<" ";
    }





    return 0;
}