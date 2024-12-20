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
void insert_a_tail(Node * &head ,Node*&tail,int val)
{
    Node * newNode=new Node(val);
    if(head==NULL){
        head=newNode;
        tail=newNode;
    }

//     }else {
//             Node * temp=head;
//     while(temp->next !=NULL){
//         temp=temp->next;
//     }
//    temp->next=newNode;
//     }
    tail->next=newNode;
    tail=newNode;
}
void print_linked_list(Node * head){

    Node * temp=head;
     while(temp!=NULL){
        
        cout<<temp->val<<" ";
        temp=temp->next;
    }
}
int main(){
    Node * head=new Node(10);
    Node * a=new Node(20);
    Node * tail=new Node(30);
    // Node * c=new Node(40);
    head->next=a;
    a->next=tail;
    // a->next=b;
    // b->next=c;
    insert_a_tail(head,tail,100);
    insert_a_tail(head,tail,60);
    

   print_linked_list(head);



    return 0;
}