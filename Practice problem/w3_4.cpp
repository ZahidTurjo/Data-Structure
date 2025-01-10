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


void insert_at_head(Node * &head,Node * &tail,int val){
    Node * newNode=new Node (val);
    if(head==NULL){
        head=newNode;
        tail=newNode;
        return;
    }
    
    newNode->next=head;
    head->prev=newNode;
    head=newNode;

}
void insert_at_tail(Node * &head,Node * &tail,int val){
   
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
void insert_at_any_position(Node * head,int val,int pos){
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
void print_forward(Node * head){
    Node * temp=head;
    cout<<"L -> ";
    while (temp!=NULL)
    {
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    cout<<endl;
    

}
void print_backward(Node * tail){
    Node * temp=tail;
    cout<<"R -> ";
    while (temp!=NULL)
    {
        cout<<temp->val<<" ";
        temp=temp->prev;
    }
    cout<<endl;
    

}
int main(){
    Node * head=NULL;
    Node * tail=NULL;
    int q;
    cin>>q;
    int x,v;
    int sz=0;
    for(int i=0;i<q;i++){
        cin>> x >>v;
         if(x>sz){
            cout<<"Invalid"<<endl;
         }
         else if(x==0){
            insert_at_head(head,tail,v);
            sz++;
            print_forward(head);
            print_backward(tail);

         }else if(x==sz){
            insert_at_tail(head,tail,v);
            sz++;
            print_forward(head);
            print_backward(tail);
         }else{
            insert_at_any_position(head,v,x);
            sz++;
            print_forward(head);
            print_backward(tail);

         }

    }



    return 0;
}