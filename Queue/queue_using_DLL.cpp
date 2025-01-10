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
        this->next=NULL;
    }    

};
class myQueue{
    Node * head=NULL;
    Node * tail=NULL;
    int sz=0;
    public:
    void push(int val){
        Node * newNode =new Node(val);
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
        Node * deleteNode;
        
        deleteNode=head;
        head=head->next;  
        delete deleteNode;
        sz++;
        if(head ==NULL){
            tail=NULL;
        }
        head->prev=NULL;
    }
    int front(){
        return head->val;
    }
    int back(){
        return tail->val;
    }
    int size(){
        return sz;
    }
    bool empty(){
        return head==NULL;
    }

};
int main(){
    myQueue q;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int val;
        cin>>val;
        q.push(val);
    }
     cout<<q.front()<< " "<< q.back()<< " "<<q.size()<<" "<<q.empty()<<endl;
     while(!q.empty()){
        cout<<q.front()<<endl;
        q.pop();
     }

    return 0;
}