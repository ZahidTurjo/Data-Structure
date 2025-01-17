#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node * next;
    Node(int val){
        this->val=val;
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
class Mystcak{
    public:
    vector<int>v;

    void push(int val){
        v.push_back(val);
    }
    void pop(){
        v.pop_back();
    }
    int top(){
        return v.back();
    }
    int size(){
        return v.size();
    
    }
    bool empty(){
        return v.empty();
    }

};
int main(){
    Mystcak st;
    myQueue q;
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