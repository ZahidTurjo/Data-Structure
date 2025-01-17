#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
        queue<string>q;
    for(int i=0;i<t;i++){
        int cmd;
        string name;
        cin>>cmd;
        if(cmd == 0){
            cin>>name;
            q.push(name);

        }else if(cmd==1){
            if(q.empty()){
                cout<<"Invalid"<<endl;
            }else{
                cout<<q.front()<<endl;
                q.pop();
            }

        }
    }


    return 0;
}