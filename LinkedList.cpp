//Insertion and Deleation

#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data=data;
        this->next=NULL;
        
    }
};
void insertathead(int a,Node* &head){
    Node* temp=new Node(a);
    temp->next=head;
    head=temp;
    
}
void insertattail(int a,Node* &tail){
    Node* temp=new Node(a);
    tail->next=temp;
    tail=temp;
}
void insertmiddle(int pos,int d,Node*&head,Node*&tail){
    
    if(pos==1){
        insertathead(d,head);
        return;
    }
    
    Node* temp=head;
    int cnt=1;
    while(cnt<pos-1){
        temp=temp->next;
        cnt++;
    }
    if(temp->next==NULL){
        insertattail(d,tail);
        return;
    }
    Node* newnode=new Node(d);
    newnode->next=temp->next;
    temp->next=newnode;
}
void print(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
void deleatatpos(int pos,Node* & head){
    if(pos==1){
        
        head=head->next;
        return;
        
    }
    Node* curr=head;
    Node* prev=NULL;
    int cnt=1;
    while(cnt<=pos-1){
        prev=curr;
        curr=curr->next;
        cnt++;
        
    }
    prev->next=curr->next;
    curr->next=NULL;
    
}
int main() {
   Node* node1=new Node(10);
   Node* head=node1;
   Node* tail=node1;
   insertathead(6,head);
   insertmiddle(2,4,head,tail);
   insertattail(8,tail);
   insertattail(7,tail); 
   print(head);
   deleatatpos(2,head);
   print(head);

    return 0;
}
