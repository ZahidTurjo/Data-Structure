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
    }    

};
void insert_a_tail(Node * &head ,Node*&tail,int val)
{
      Node * newNode=new Node (val);
    if(head==NULL){
        head=newNode;
        tail=newNode;
        return; 
    }
    tail->next=newNode;
    newNode->prev=tail;
    tail=newNode;
}
void print_linked_list(Node * head){

    Node * temp=head;
     while(temp!=NULL){
        
        cout<<temp->val<<" ";
        temp=temp->next;
    }
}
void print_reverse(Node * head,Node * tail)

{
    if(head== NULL){
      
        return;
    }
    
 for(Node * i=head,*j=tail;i!=j && i->prev!=j;i=i->next,j=j->prev){

        swap(i->val,j->val);
    
 }
    

}
int main(){

    Node * head=NULL;
    Node * tail=NULL;
    int val;
    while(true){
        cin>>val;
        if(val==-1){
            break;
        }
        insert_a_tail(head,tail,val);
    }
    print_reverse(head,tail);
    print_linked_list(head);


        return 0;
}