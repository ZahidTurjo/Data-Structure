#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<int>st;
    queue<int>q;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        st.push(x);

    }
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
         int x;
        cin>>x;
        q.push(x);

    }
    if(t==n){
        while(!st.empty()){
            if(st.top()==q.front()){
                st.pop();
                q.pop();
            }else{
                cout<<"NO";
                return 0;
            }
        }
      cout<<"YES";
    }else{
        cout<<"NO";
    }
   


    return 0;
}