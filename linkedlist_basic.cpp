//linkedlist_basic.cpp

#include<iostream>
using namespace std;
struct node{
    int data;
    struct node* next;
};
int main(){
    struct node* one=new node;
    struct node* two=new node;
    struct node* three=new node;
    struct node* head=new node;
    one->data=3;
    two->data=4;
    three->data=5;
    head=one;
    one->next=two;
    two->next=three;
    three->next=NULL;
    
    
    //add element at the starting 
    
    
    struct node* newnode=new node;
    newnode->data=5;
    newnode->next=one;
    head=newnode;
    
    
    //adding at the last or we can say append
    
    
    struct node* lastnode=new node;
    lastnode->data=8;
    while(head!=NULL){
        head=head->next;
        
    }
    head->next=lastnode;
    head=newnode;
    
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
    
}
