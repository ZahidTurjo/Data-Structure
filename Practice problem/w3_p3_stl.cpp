#include<bits/stdc++.h>
using namespace std;
int main(){
    list<string>l;
    string val;
    while(true){
        cin>>val;
        if(val=="end"){
            break;
        }
        l.push_back(val);
    }
    int q;
    cin>>q;
    auto current =l.begin();
    string cmnd;
    for(int i=0;i<q;i++){
        cin>>cmnd;
      if(cmnd == "visit"){
        string address;
        cin>>address;
        auto it=find(l.begin(),l.end(),address);
        if(it != l.end()){
            current=it;
            cout<<address<<endl;

        }else{
            cout<<"Not Available"<<endl;
        }
      }
      else if(cmnd=="next" ){
        if(current !=l.end()&& next(current) != l.end()){
            current++;
            cout<<*current<<endl;
        }else{
            cout<<"Not Available"<<endl;

        }

      }
      else if(cmnd == "prev"){
        if(current !=l.begin()){
            current--;
            cout<<*current<<endl;

        }else{
             cout<<"Not Available"<<endl;
        }
      }
    }

    

    return 0;
}