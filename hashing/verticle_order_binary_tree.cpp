#include <bits/stdc++.h>
using namespace std;
map<int, vector<int>> m;

class node{
    public:
    int data;
    node* left;
    node* right;
    node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};
node* insert(node* root, int val){
    
    if(root==NULL){
        return new node(val);
    }
    queue<node*>q;
    q.push(root);
    while(!q.empty()){
        node* temp=q.front();
        q.pop();
        if(temp->left!=NULL){
            q.push(temp->left);
        }
        else{
            temp->left=new node(val);
            return root;
        }
        if(temp->right!=NULL){
            q.push(temp->right);
        }
        else{
            temp->right=new node(val);
            return root;
        }

    }
    return root;
}
void inorder(node* root){
    if(root==NULL){
        return ;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);

}

void verticalOrder(node* root, int hd){
    if(root==NULL){
        return ;
    }
    m[hd].push_back(root->data);
    verticalOrder(root->left,hd-1);
    verticalOrder(root->right,hd+1);
}
//driver code
int main()
{
    // int n;
    // cin>>n;
    node* root=NULL;
    // for(int i=0;i<n;i++){
    //     int x;
    //     cin>>x;
    //     root=insert(root,x);
    // }
    // inorder(root);
    root= new node(10);
    root->left= new node(7);
    root->left->left= new node(3);
    root->left->right= new node(3);
    root->right=new node(4);
    root->right->left=new node(14);
    root->right->right=new node(5);

    verticalOrder(root,0);
    map<int, vector<int>> ::iterator it;
    for(it=m.begin();it!=m.end();it++){
        
        for(int j=0;j<(it->second).size();j++){
            cout<<it->first<<"->"<<it->second[j]<<" ";
        }
        cout<<endl;
    }    return 0;
}