#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,q;
    cin>>n>>q; 
    vector<long long int>v2(n+1);

    for(int i=1;i<=n;i++){
       cin>>v2[i];
 
    }
    vector<long long int>pre(n+1);
    pre[1]=v2[1];
    for(int i=2;i<=n;i++){
        pre[i]=pre[i-1]+v2[i];
     
    }
    while (q--)
    {
        int l,r;
        cin>>l>>r;
        // int sum=0;
        // for(int i=l;i<=r;i++){
        //    sum=sum+v[i];
        // }
        long long int sum;

        if(l==1){
            sum=pre[r];
        }else{
        sum=pre[r]-pre[l]+v2[l];
        }
        cout<<sum<<endl;

    }
   
    

}
