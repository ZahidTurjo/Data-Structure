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
void print_reverse(Node * &head,Node * &tail,Node * temp)

{
    if(temp->next== NULL){
        head=temp;
        return;
    }
    
    print_reverse(head,tail,temp->next);
    temp->next->next=temp;
    temp->next=NULL;
    tail=temp;
    

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
    print_reverse(head,tail,head);
    print_linked_list(head);


        return 0;
}