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
int main(){
    Node * head=NULL;
    Node * tail=NULL;
    Node * head1=NULL;
    Node * tail1=NULL;
    int sz1=0;
    int sz2=0;
    int val;
    while(true){
        cin>>val;
        if(val==-1){
            break;
        }
        sz1++;
        insert_at_tail(head,tail,val);
    }
    while(true){
        cin>>val;
        if(val==-1){
            break;
        }
        insert_at_tail(head1,tail1,val);
        sz2++;
    }
    Node * temp=head;
    Node * temp1=head1;
    int flag=0;
    if(sz1==sz2){
           while(temp!=NULL && temp1!=NULL){

        if(temp->val != temp1->val){
            flag=1;
            break;

        }
        temp=temp->next;
        temp1=temp1->next;
    }
    }else{
        flag=1;
    }
 
    // print_linked_list(head);
    if(flag==0){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }



    return 0;
}