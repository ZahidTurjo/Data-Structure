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
void sort_ll(Node * head){
    for(Node * i =head;i->next!=NULL;i=i->next){
        for(Node * j=i;j!=NULL;j=j->next){
            if(i->val>j->val){
                swap(i->val,j->val);
            }
        }
    }
}
void print_linked_list(Node * head){
    Node * temp=head;

    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    cout<<endl;
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

  
    
    sort_ll(head);
    print_linked_list(head);
    
   



    return 0;
}