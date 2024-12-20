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
void insert_a_tail(Node * &head,int val)
{
    Node * newNode=new Node(val);
    if(head==NULL){
        head=newNode;
    }else {
            Node * temp=head;
    while(temp->next !=NULL){
        temp=temp->next;
    }
   temp->next=newNode;
    }




}
void print_linked_list(Node * head){

    Node * temp=head;
     while(temp!=NULL){
        
        cout<<temp->val<<" ";
        temp=temp->next;
    }
}
int main(){
    Node * head=NULL;
    // Node * a=new Node(20);
    // Node * b=new Node(30);
    // Node * c=new Node(40);
    // head->next=a;
    // a->next=b;
    // b->next=c;
    insert_a_tail(head,100);
    insert_a_tail(head,100);
    insert_a_tail(head,100);

   print_linked_list(head);



    return 0;
}