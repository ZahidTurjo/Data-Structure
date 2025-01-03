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
void insert_at_head(Node * &head,Node *&tail,int val)
{
    Node * newNode=new Node(val);
    newNode->next=head;
    head=newNode;
    if(tail==NULL){
        tail=newNode;
    }

}
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
void delete_at_any_position(Node * &head,Node *&tail,int idx){
    if(head== NULL){
        return;
    }
    if(idx==0){
        Node * deleteNode=head;
        head=head->next;
        delete deleteNode;
        return;
    }
    Node * temp=head;
    for(int i=1;i<idx;i++){
       
        temp=temp->next;
    }
    
    Node * deleteNode=temp->next;
    temp->next=temp->next->next;
    if(temp->next==NULL){
        tail=temp;
    }
    delete deleteNode;

}
void print_linked_list(Node *head){
    Node * temp=head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int size(Node * head){
    Node * temp=head;
    int count=0;
    while(temp!=NULL){
        temp=temp->next;
        count++;
    }
    return count;

}

int main(){
     Node * head=NULL;
     Node * tail=NULL;
     
    int t;
    cin>>t;
    while(t--){
        int val;
        int idx;
        cin>>idx>>val;
        int len=size(head);
        if(idx==0){
            insert_at_head(head,tail,val);
            print_linked_list(head);
        }else if(idx==1){
            insert_at_tail(head,tail,val);
            print_linked_list(head);

        }else if(idx==2){
            if(val<len){
                delete_at_any_position(head,tail,val);
                print_linked_list(head);
            }else{
                print_linked_list(head);
            }
            
            

        }

    }

}