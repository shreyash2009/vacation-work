#include <bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* next;

    node(int val){
        data= val;
        nexxt=NULL;
    }
};
int count(node* head){

    if(head==NULL){
        return 0;
    }
    node* temp=head;
    int ans=0;
    while(temp!=NULL){
        ans++;
        temp=temp->next;

    }
    return ans;
}
node* append(node* head, int k, int n){

    node* temp=head;
    node* last;
    
}
//driver code
int main()
{


    return 0;
}