#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node * left;
    Node * right;
    Node(int val){
        this->val=val;
        this->left=NULL;
        this->right=NULL;
    }    

};
Node * input_tree(){
    int val;
    cin>>val;

    Node * root;
    if(val==-1) root=NULL;
    else root=new Node (val);
    queue<Node *>q;
    if(root!=NULL) q.push(root);
    while(!q.empty()){
        Node * p=q.front();
        q.pop();

        int l,r;
        cin>>l>>r;
        Node * myleft,*myright;
        if(l==-1) myleft=NULL;
        else myleft=new Node(l);

        if(r==-1) myright=NULL;
        else myright=new Node(r);

        p->left=myleft;
        p->right=myright;



        if(p->left){
            q.push(p->left);
        }
        if(p->right){
            q.push(p->right);
        }
    }
    return root;
}
void insert(Node * root ,int val){
    Node * newnode=new Node(val);
    if(root == NULL){
        root=newnode;
        return;
    }
    
    if(root->val>val){
        
        if(root->left==NULL){
            root->left=newnode;
            return ;
        }else{
            insert(root->left,val);

        }
    }else{
         
        if(root->right==NULL){
            root->right=newnode;
            return ;
        }else{
            insert(root->right,val);
        }

    }
}
void level_order(Node * root){
    queue<Node *>q;
    q.push(root);
    while (!q.empty())
    {
        Node * f=q.front();
        q.pop();
        cout<<f->val<<" ";
        if(f->left !=NULL){
            q.push(f->left);
        }
        if(f->right !=NULL){
            q.push(f->right);
        }

    }
    


}
int main(){
    Node * root =input_tree();
    int val;
    cin>>val;
    insert(root,val);
    level_order(root);





    return 0;
}