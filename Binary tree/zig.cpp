#include <bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* right;
    Node* left;

    Node(int val){
        data =  val;
        left=right=NULL;
    }
};
struct Node* insert(Node* &root, int val ){
    if(root== NULL){
        return new Node(val);
    }
    queue<Node*> q;
    q.push(root);

    while(!q.empty()){
        Node* temp= q.front();
        q.pop();
        if(temp->left!= NULL){
            q.push(temp->left);
        }
        else{
            temp->left = new Node(val);
            return root;
        }
        if(temp->right!= NULL){
            q.push(temp->right);
        }
        else{
            temp->right = new Node(val);
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

vector<vector<int>> zig(Node* root){
    if(root==NULL){
        return {};
    }
    vector<vector<int>> ans;
    bool flag = 1;
    queue <Node*> q;
    q.push(root);
    while(!q.empty()){
        q.pop();

        int size = q.size();
        for(int i=0;i<size;i++){
        Node* t = q.front();
            vector<int> row(size);

            int index= (flag) ? i : (size-i-1); 
        row[index] = t->data;
        if(t->left){
            q.push(t->left);
        }
        if(t->right){
            q.push(t->right);
        }
        }

        //after this level 
        flag = !flag;
        // ans.push_back(row);
    }
    return ans;
}

int height(Node* root){
    if(root==NULL){
        return 0;
    }
    int l =height(root->left);
    int r = height(root->right);

    return (1+max(l,r));
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
    cout<<"\n"<<height(root);
    return 0;
}