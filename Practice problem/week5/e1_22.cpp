#include<bits/stdc++.h>
using namespace std;
vector<int>v;
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
void leaf_node(Node * root){
    if(root==NULL){
        return;
    }
    if(root->left ==NULL && root->right==NULL){
        v.push_back(root->val);
    }
    leaf_node(root->left);
    leaf_node(root->right);
}

int main(){
       Node * root= input_tree();
       if(root==NULL){
        return 0;
       }
       leaf_node(root);
     
       sort(v.begin(),v.end(),greater<int>());

       for(int x:v){
        cout<<x<<" ";
       }

    return 0;
}