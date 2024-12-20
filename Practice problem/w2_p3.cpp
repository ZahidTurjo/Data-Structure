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

    }
    tail->next=newNode;
    tail=newNode;

}
void print_linked_list(Node * head,int index){
    Node * temp=head;
    int is_even=index/2;
    
       
    if(index%2 == 0){
         for(int i=0;i<is_even-1;i++){
            temp=temp->next;
        }
        cout<<temp->val<<" "<<temp->next->val<<" ";
    }else{
         for(int i=0;i<is_even;i++){
            temp=temp->next;
        }
          cout<<temp->val<<endl;

    }
          
        
    // while(temp!=NULL){
    //     cout<<temp->val<<" ";
    //     temp=temp->next;
    // }

}
int main(){
    Node * head=NULL;
    Node * tail=NULL;
    int val;
    int index=0;
  
    while(true){
        cin>>val;
        if(val==-1){
            break;
        }
        index++;
        insert_at_tail(head,tail,val);
    }
    print_linked_list(head,index);


    return 0;
}