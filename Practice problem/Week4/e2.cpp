#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<int>st;
    queue<int>q;
    int S,Q;
    cin>>S>>Q;
    for(int i=0;i<S;i++){
        int x;
        cin>>x;
        st.push(x);
    }
    for(int i=0;i<Q;i++){
        int x;
        cin>>x;
        q.push(x);
    }
    if(S==Q){
        while(!st.empty()){
            if(st.top()==q.front()){
                st.pop();
                q.pop();

            }else{
                cout<<"NO"<<endl;
                return 0;
            }
        }
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }

    return 0;
}