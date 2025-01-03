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
int size(Node * head){
    Node * temp=head;
    int count=0;
    while(temp!=NULL){
        temp=temp->next;
        count++;
    }
    return count;

}
void check_same_same(Node * head,Node * head1){
    int flag=0;
    while(head!=NULL || head1 !=NULL){
        if(head->val != head1->val){
           flag=1;
           break;
        }
        head=head->next;
        head1=head1->next;
    }
    if(flag==1){
        cout<<"NO"<<endl;
    }else{
        cout<<"YES"<<endl;
    }
}
int main(){
    Node * head=NULL;
    Node * tail=NULL;
    Node * head1=NULL;
    Node * tail1=NULL;
    int val;
  
    while(true){
        cin>>val;
        if(val==-1){
            break;
        }
        insert_at_tail(head,tail,val);
    }
    
    while(true){
        cin>>val;
        if(val==-1){
            break;
        }
        insert_at_tail(head1,tail1,val);
    }
   int ll1=size(head);
   int ll2=size(head1);
   if(ll1==ll2){
    check_same_same(head,head1);
   }else{
    cout<<"NO";
   }



    return 0;
}