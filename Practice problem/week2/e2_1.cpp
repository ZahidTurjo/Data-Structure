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
int maximum(Node * head){
    Node * temp=head;
    
    int max_val=INT_MIN;
    while(temp!=NULL){
        if(temp->val>max_val){
            max_val=temp->val;
        }
        temp=temp->next;
    }
    return max_val;
}
int minimum(Node * head){
    Node * temp=head;
    
    int min_val=INT_MAX;
    while(temp!=NULL){
        if(temp->val<min_val){
            min_val=temp->val;
        }
        temp=temp->next;
    }
    return min_val;
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
    int max=maximum(head);
    int min=minimum(head);
    int result=max-min;
    cout<<result<<endl;


    return 0;
}