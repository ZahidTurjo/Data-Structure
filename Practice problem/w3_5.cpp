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


void insert_at_head(Node * &head,Node * &tail,int val){
    Node * newNode=new Node (val);
    if(head==NULL){
        head=newNode;
        tail=newNode;
        return;
    }
    
    newNode->next=head;
    head->prev=newNode;
    head=newNode;

}
void insert_at_tail(Node * &head,Node * &tail,int val){
   
    Node * newNode=new Node (val);
    if(head==NULL){
        head=newNode;
        tail=newNode;
        return; 
    }
    tail->next=newNode;
    newNode->prev=tail;
    tail=newNode;
    


}

void print_forward(Node * head){
    Node * temp=head;
    cout<<"L -> ";
    while (temp!=NULL)
    {
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    cout<<endl;
    

}
void print_backward(Node * tail){
    Node * temp=tail;
    cout<<"R -> ";
    while (temp!=NULL)
    {
        cout<<temp->val<<" ";
        temp=temp->prev;
    }
    cout<<endl;
    

}
void delete_at_head(Node * &head,Node * &tail){
    Node * deleteNode=head;
    head=head->next;
    delete deleteNode;
    if(head ==NULL){
        
        tail=NULL;
        return;
    }
    head->prev=NULL;

}
void delete_at_tail(Node * &head,Node * &tail){
    Node * deleteNode=tail;
    tail=tail->prev;
    delete deleteNode;
    if(tail==NULL){
       head=NULL;
       return; 
    }
    tail->next=NULL; 

}
void delete_at_any_pos(Node * head,int val){
    Node * temp=head;
    for(int i=1;i<val;i++){
        temp=temp->next;
    }
    if(temp->next== NULL ){
        return;
    }
    Node * deleteNode=temp->next;
    temp->next=temp->next->next;
    temp->next->prev=temp;
    delete deleteNode;
}
int main(){
    Node * head=NULL;
    Node * tail=NULL;
    int q;
    cin>>q;
    int x,v;
    int sz=0;
    for(int i=0;i<q;i++){
        cin>> x >>v;
         if(x==0){
            insert_at_head(head,tail,v);
            sz++;

         }else if(x==1){
            insert_at_tail(head,tail,v);
            sz++;
         }
         else if(x==2 && v<sz){
            if(v==0){
                delete_at_head(head,tail);
            
                sz--;

            }else if(sz-1==v){
                delete_at_tail(head,tail);
               
                sz--;
            }else{
               
                  delete_at_any_pos(head,v);
                  sz--;
                
            }

         

         }
            print_forward(head);
            print_backward(tail);


    }



    return 0;
}