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
    if(head == NULL){
       head=newNode;
       tail=newNode;
    }
    tail->next=newNode;
    tail=newNode;

}
void print_maximum(Node * head){
    Node * temp=head;
    int max=INT_MIN;
    while (temp!=NULL)
    {
       if(temp->val>max){
        max=temp->val;
       }
       temp=temp->next;
    }
    cout<<max<<endl;
    

}
int main(){
    Node * head1=NULL;
    Node * tail1=NULL;
 
    int val;
    
    while(true)
    {
        cin>>val;
        if(val==-1){
            break;
        }
  
        insert_at_tail(head1,tail1,val);
        
    }
    print_maximum(head1);
      
      
  
    }
