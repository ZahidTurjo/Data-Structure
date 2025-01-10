#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<int>st;
    st.push(10);
    st.push(100);
    st.push(1000);
    st.push(10000);
while(!st.empty()){
    cout<<st.top()<<endl;
    st.pop();
}


    return 0;
}