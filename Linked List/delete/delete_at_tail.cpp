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
void delete_at_tail(Node * head,Node * tail){
    Node * temp=head;
    while(temp->next->next !=NULL){
          temp=temp->next;
    }
    Node * deleteNode=temp->next;
    temp->next=NULL;
    delete deleteNode;
    tail=temp;



}
int main(){
       Node * head=new Node(10);
       Node * a=new Node(20);
       Node * b=new Node(102);
       Node * tail=new Node(30);
       head->next=a;
       a->next=b;
       b->next=tail;
       delete_at_tail(head,tail);
       Node * temp=head;
       while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
       }

    return 0;
}