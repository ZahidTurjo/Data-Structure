#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    string val;
    Node * next;
    Node * prev;
    Node(string val){
        this->val=val;
        this->next=NULL;
        this->prev=NULL;
    }    

};
void insert_at_tail(Node * &head,Node *&tail,string val){
    Node * newNode =new Node(val);
    if(head==NULL){
        head=newNode;
        tail=newNode;
        return;
    }
    tail->next=newNode;
    tail=newNode;
}
void print_forward(Node * head){
    Node * temp=head;
    while (temp!=NULL)
    {
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    

}
void print_backward(Node * tail){
    Node * temp=tail;
    while (temp!=NULL)
    {
        cout<<temp->val<<" ";
        temp=temp->prev;
    }
    

}
int main(){
    Node * head=NULL;
    Node * tail=NULL;
    string x;
    while(true){
        cin>>x;
        if(x =="end"){
            break;
        }
        insert_at_tail(head,tail,x);

    }


    return 0;
}