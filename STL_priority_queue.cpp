#include<bits/stdc++.h>
using namespace std;
int main(){
    // priority_queue<int> pq; //maximum
    priority_queue<int,vector<int>,greater<int>>pq; //for minimum
    pq.push(10);
    pq.push(20);
    pq.push(30);
    cout<<pq.top()<<endl;



    return 0;
}
