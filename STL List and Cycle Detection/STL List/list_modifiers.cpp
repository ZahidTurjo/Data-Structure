#include<bits/stdc++.h>
using namespace std;
int main(){
    list<int>l={1,2,3,4,5};
    // list<int>l2;
    // l2=l;

    // l.push_back(100);
    // l.push_front(34);

    // l.pop_back();
    // l.pop_front();
    cout<<*next(l.begin())<<endl;
    l.insert(next(l.begin(),2),100);
    l.erase(next(l.begin(),3));
    for(int x:l){
        cout<<x<<" ";
    }


    return 0;
}