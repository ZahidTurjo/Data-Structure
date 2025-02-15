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
void print_forward(Node * head){
    Node * temp=head;
    while (temp!=NULL)
    {
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    

}
void insert_at_any_position(Node * head,Node * &tail,int val,int pos){
    Node * newNode=new Node(val);
    Node * temp=head;

    for(int i=1;i<pos;i++){
        temp=temp->next;
    }
    newNode->next=temp->next;
    temp->next->prev=newNode;
    temp->next=newNode;
    newNode->prev=temp;
 
    


}
int main(){
     Node * head=new Node(10);
    Node * a=new Node(20);
    Node * tail=new Node(30);
    head->next=a;
    a->prev=head;

    a->next=tail;
    tail->prev=a;
    insert_at_any_position(head,tail,100,1);
    insert_at_any_position(head,tail,100,2);
    print_forward(head);



    return 0;
}