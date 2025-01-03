#include<bits/stdc++.h>
using namespace std;
int main(){
    list<int>l={10,20,30,40,20,10,50};
    // l.remove(10);
    // l.sort(greater<int>());
    l.reverse();
    for(int x:l){
        cout<<x <<" ";
    }


    return 0;
}