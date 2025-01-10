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
void insert_at_tail(Node * &head,Node * &tail,int val){
    Node * newNode =new Node (val);
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
    cout<<endl;
}
void reverse_linked_list(Node * &head,Node * &tail){
    Node * curr=head;
    Node * temp=NULL;
    while(curr!=NULL){
        temp=curr->prev;
        curr->prev=curr->next;
        curr->next=temp;
        curr=curr->prev;
    }
    if(temp!=NULL){
        head=temp->prev;
        if(tail==NULL){
            tail=head;
        }else{
            tail=tail;

        }


    }


}
int main(){
    Node * head=NULL;
    Node * tail=NULL;
   
    int sz1=0;
   
    int val;
    while(true){
        cin>>val;
        if(val==-1){
            break;
        }
        sz1++;
        insert_at_tail(head,tail,val);
    }

  
    reverse_linked_list(head,tail);
 
    print_linked_list(head);
    
   



    return 0;
}