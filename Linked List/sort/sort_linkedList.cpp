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
void sort_linked_list(Node * head){
    for(Node * i=head;i->next!=NULL;i=i->next){
        for(Node *j=i->next;j!=NULL;j=j->next){
            if(i->val>j->val){
                swap(i->val,j->val);
            }
        }
    }

}
int main(){
       Node * head=new Node(300);
       Node * a=new Node(20);
       Node * b=new Node(102);
       Node * tail=new Node(1);
       head->next=a;
       a->next=b;
       b->next=tail;
       sort_linked_list(head);
       Node * temp=head;
       while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
       }
       

    return 0;
}