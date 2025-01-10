#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node * next;
    Node * prev;
    Node(int val){
        this->val=val;
        this->next=NULL;
        this->prev=NULL;
    }    

};

class Mystcak{
    public:
    Node * head=NULL;
    Node * tail=NULL;
    int sz=0;


    void push(int val){
        Node * newNode=new Node(val);
        sz++;
        if(head==NULL){
            head=newNode;
            tail=newNode;
            return;
        }
        tail->next=newNode;
        newNode->prev=tail;
        tail=newNode;
    }
    void pop(){
        Node * deleteNode=tail;
        tail=tail->prev;
       sz--;
        delete deleteNode;
        if(tail==NULL){
            head=NULL;
            return;
        }
        tail->next=NULL;
    }
    int top(){
        if(tail!=NULL){
            return tail->val;
        }
    }
    int size(){
        return sz;
    
    }
    bool empty(){
        return head == NULL;
    }

};
int main(){
    Mystcak st;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        st.push(x);
    }
   while (!st.empty()) {
    cout << st.top() << endl;
    st.pop();
}


    
    
 

    return 0;
}