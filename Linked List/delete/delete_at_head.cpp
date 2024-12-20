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
void delete_at_head(Node * &head){
    Node * deleteNode=head;
    head=head->next;
    delete deleteNode;

}
int main(){
       Node * head=new Node(10);
       Node * a=new Node(20);
       Node * tail=new Node(30);
       head->next=a;
       a->next=tail;
       delete_at_head(head);
       Node * temp=head;
       while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
       }

    return 0;
}