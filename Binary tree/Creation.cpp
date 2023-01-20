#include <bits/stdc++.h>
using namespace std;
struct Node{

    int data;
    Node* left;
    Node* right;
    Node(int val){
        data=val;
        left=right=NULL;
    }
};

struct Node* insert(Node* &root, int val){
    if(root==NULL){
        return new Node(val);
    }
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        Node* temp = q.front();
        q.pop();

        if(temp->left!=NULL){
            q.push(temp->left);
        }
        else{
            Node* n = new Node(val);
            temp->left = n;
            return root;
        }

        if(temp->right !=NULL){
            q.push(temp->right);
        }
        else{
            Node* n = new Node(val);
            temp->right = n;
            return root;
        }
    }
    return root;
}

void inorder(Node* root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data;
    inorder(root->right);
}

void level(Node* root){
    queue <Node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        Node* temp = q.front();
        q.pop();
        if(temp != NULL){
        cout<<temp->data<<" ";
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
        else if(!q.empty()){
            q.push(NULL);
        }
    }
}
//driver code
int main()
{
    Node* root = NULL;
    int n;
    cout<<"Enter\n";
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        root= insert(root,x);
    }
    inorder(root);
    level(root);
    return 0;
}