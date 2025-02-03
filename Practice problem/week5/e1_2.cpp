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
int max_height(Node * root){
    if(root ==NULL){
        return 0;
    }
 
    int l=max_height(root->left);
    int r=max_height(root->right);
    return max(l,r)+1;

}

int main(){
       Node * root= input_tree();
       if(root==NULL){
        return 0;
       }
       int mx=max_height(root);

       queue<pair<Node *,int>>q;
       q.push({root,1});
       vector<int>v;

       while (!q.empty())
       { 
        pair<Node *,int> parent=q.front();
        q.pop();
        Node * p=parent.first;
        int level=parent.second;
        if(level == mx){
           v.push_back(p->val);
        }
        if(p->left !=NULL){
            q.push({p->left,level+1});
        }
        if(p->right !=NULL){
            q.push({p->right,level+1});
        }
    
       }
       sort(v.begin(),v.end(),greater<int>());

       for(int x:v){
        cout<<x<<" ";
       }

    return 0;
}