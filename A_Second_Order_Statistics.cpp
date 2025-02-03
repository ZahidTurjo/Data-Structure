#include<bits/stdc++.h>
using namespace std;
int main(){
    set<int>s;
    int x;
    cin>>x;
    while(x--){
        int y;
        cin>>y;
        s.insert(y);
    }
    int cnt=1;
    if(s.size()==0 || s.size()==1){
        cout<<"NO";
        return 0;
    }
    for(int z:s){
        if (cnt==2)
            cout<<z<<" ";
          
        cnt++;    

    }




    return 0;
}