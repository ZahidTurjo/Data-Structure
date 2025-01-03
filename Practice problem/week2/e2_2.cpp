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
       return;
    }
    tail->next=newNode;
    tail=newNode;

}

int main(){
   int t;
   cin>>t;
   while(t--){

    Node * head=NULL;
    Node * tail=NULL;
 
    int val;
    int index=0;
    
    while(true)
    {
        cin>>val;
        if(val==-1){
            break;
        }
        index++;
        insert_at_tail(head,tail,val);
        
    }
    Node * temp=head;
    int x;
    cin>>x;
    int count=0;
    while(temp!=NULL){
        
        if(temp->val == x){
           break;
        }
        temp=temp->next;
        count++;

    }
    if(index == count){
        cout<<"-1"<<endl;
    }else{
        cout<<count<<endl;
    }

   }
 

 
      
  
    }
