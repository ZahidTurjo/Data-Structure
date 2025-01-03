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
void insert_at_tail(Node * &head,Node * &tail,int val){
    Node * newNode=new Node(val);
    if(head ==NULL){
        head=newNode;
        tail=newNode;
        return;

    }
    tail->next=newNode;
    tail=newNode;

}

void remove_duplicate(Node * head){
    
    for(Node * i=head;i=NULL;i=i->next){
        Node * temp=i;
        for(Node * j=i->next;j!=NULL;j=j->next){
            if(i->val==j->val){
                Node * duplicate=j;
                temp->next=j->next;
                delete duplicate;
                j=temp;

            }else{
                temp=temp->next;
            }
            
        }
    }
 

}
void print_link_list(Node *head){
    Node * temp=head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
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
     
        insert_at_tail(head,tail,val);
    }
    remove_duplicate(head);
    print_link_list(head);
    


    return 0;
}