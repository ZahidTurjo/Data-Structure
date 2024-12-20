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
void delete_at_any_position(Node * head,int idx){
    Node * temp=head;
    for(int i=1;i<idx;i++){
         temp=temp->next;
    }
    Node * deleteNode=temp->next;
    temp->next=temp->next->next;
    delete deleteNode;

}
int main(){
       Node * head=new Node(10);
       Node * a=new Node(20);
       Node * b=new Node(102);
       Node * tail=new Node(30);
       head->next=a;
       a->next=b;
       b->next=tail;
       delete_at_any_position(head,3);
       Node * temp=head;
       while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
       }

    return 0;
}