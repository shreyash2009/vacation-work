#include <bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* next ;

    node(int val){
        data = val;
        next = NULL;
    }
    
};

void insertAthead(node* &head, int val){
    node* n =new node(val);
    n->next = head;
    head= n;
}
//insert at tail
void insertAtTail(node* &head, int val){                 //address by reference as we want to update the list 
    node* n = new node(val);
    if(head == NULL){
        head = n;
        return;
    }
    node* temp = head;
    while(temp->next != NULL){
        temp=temp->next;
    }
    temp->next = n;

}

void display(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}


bool detectCycle(node* head){

    node* fast,slow;
    fast = head;
    slow= head;
    while(fast!=NULL && fast->next !=NULL){
        if(fast == slow){
          
            return true;
        }
        fast=fast->next->next;
        slow=slow->next;
    }
    return false;
}

void removal(node* &head){

    node* slow=head,fast=head;

    do
    {
        slow=slow->next;
        fast=fast->next->next;
    } while (slow!=fast);
    slow->next=NULL;
    return;
    
}
//driver code
int main()
{
    int n;
    cin>>n;
    node* head=NULL;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
         insertAtTail(head, x);
    }
    display(head);
    cout<<endl;

    
    cout<<detectCycle(head)<<endl;
    return 0;
}