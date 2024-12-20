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
int main(){
    Node * head1=NULL;
    Node * tail1=NULL;
    Node * head2=NULL;
    Node * tail2=NULL;
    int val;
    int size1=0;
    int size2=0;
    while(true)
    {
        cin>>val;
        if(val==-1){
            break;
        }
        size1++;
        insert_at_tail(head1,tail1,val);
    }
      while(true)
    {
        cin>>val;
        if(val==-1){
            break;
        }
        size2++;
        insert_at_tail(head2,tail2,val);
    }
      if(size1==size2){
        cout<<"YES"<<endl;
      }else{
        cout<<"NO"<<endl;
      }
    
  
    }



